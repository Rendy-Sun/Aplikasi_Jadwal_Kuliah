#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "formtambahmatkul.h"
#include "formupdatematkul.h"
#include "formdeletematkul.h"
#include "formdaftartugas.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlQuery>
#include <QDate>
#include <QLocale>
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    //Mengatur Koneksi ke MySql XAMPP
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString databasename = "G:/My Drive/Database/AplikasiJadwal/db_jadwal.db";
    //QString databasename = QCoreApplication::applicationDirPath() + "/db_jadwal.db";
    db.setDatabaseName(databasename);

    //Coba Buka Koneksi ke database
    if(!db.open())
    {
        QMessageBox::critical(this, "Koneksi Gagal", "Gagal Terhubung ke database:\n"+db.lastError().text());
        return;
    }
    TampilkanData();
    QTimer *timer;
    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::LiveTime);
    timer->start(1000);
    LiveTime();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TampilkanData(){
    /*//Mengambil data dari tabel database
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery("SELECT hari AS [HARI], mata_kuliah AS [MATA KULIAH], dari_jam AS [JAM MULAI], sampai_jam AS [JAM SELESAI], dosen AS [DOSEN], ruangan AS [RUANGAN] FROM tabel_jadwal");
    //Masukkan data ke komponen tabel view di ui
    ui->tbJadwal->setModel(model);*/
    if(selected_hari != "" && selected_hari !="ALL"){
        QSqlQuery query;
        query.prepare("SELECT mata_kuliah AS [MATA KULIAH], dari_jam AS [JAM MULAI] , sampai_jam[JAM SELESAI], ruangan AS [RUANGAN], dosen AS [DOSEN] FROM tabel_jadwal WHERE hari=:selected_hari");
        query.bindValue(":selected_hari", selected_hari);

        if(!query.exec())
        {
            QMessageBox::critical(this, "ERROR", "Error Query not Empty :" + query.lastError().text());
            return;
        }

        QSqlQueryModel *model = new QSqlQueryModel(this);
        model->setQuery(std::move(query));
        ui->tbJadwal->setModel(model);

    }else if(selected_hari == "ALL" && selected_hari != ""){
        QSqlQuery query;
        query.prepare("SELECT hari AS [HARI], mata_kuliah AS [MATA KULIAH], dari_jam AS [JAM MULAI], sampai_jam AS [JAM SELESAI], ruangan AS [RUANGAN], dosen AS [DOSEN] FROM tabel_jadwal INNER JOIN tabel_hari ON tabel_jadwal.hari = tabel_hari.nama_hari ORDER BY (tabel_hari.nama_hari) DESC, (tabel_jadwal.dari_jam) ASC");
        if(!query.exec()){
            QMessageBox::critical(this, "ERROR", "Error Query All" + query.lastError().text());
            return;
        }
        QSqlQueryModel *model = new QSqlQueryModel(this);
        model->setQuery(std::move(query));
        ui->tbJadwal->setModel(model);
    }else{
        // Mendeteksi Hari apa hari ini
        QDate current_date = QDate::currentDate();
        QLocale lokalIndonesia(QLocale::Indonesian, QLocale::Indonesia);
        QString current_day = lokalIndonesia.toString(current_date, "dddd");
        selected_hari = current_day;

        if(selected_hari == "Sabtu" || selected_hari == "Minggu"){
            QSqlQuery query;
            query.prepare("SELECT hari AS [HARI], mata_kuliah AS [MATA KULIAH], dari_jam AS [JAM MULAI], sampai_jam AS [JAM SELESAI], ruangan AS [RUANGAN], dosen AS [DOSEN] FROM tabel_jadwal INNER JOIN tabel_hari ON tabel_jadwal.hari = tabel_hari.nama_hari ORDER BY (tabel_hari.nama_hari) DESC, (tabel_jadwal.dari_jam) ASC");
            if(!query.exec()){
                QMessageBox::critical(this, "ERROR", "Error Query All" + query.lastError().text());
                return;
            }
            QSqlQueryModel *model = new QSqlQueryModel(this);
            model->setQuery(std::move(query));
            ui->tbJadwal->setModel(model);
        }else
        {
            QSqlQuery query;
            query.prepare("SELECT hari AS [HARI], mata_kuliah AS [MATA KULIAH], dari_jam AS [JAM MULAI] , sampai_jam[JAM SELESAI], ruangan AS [RUANGAN], dosen AS [DOSEN] FROM tabel_jadwal WHERE hari=:selected_hari ");
            query.bindValue(":selected_hari", selected_hari);
            if(!query.exec()){
                QMessageBox::critical(this, "ERROR", "Error Query else :" +query.lastError().text());
                return;
            }

            QSqlQueryModel *model = new QSqlQueryModel(this);
            model->setQuery(std::move(query));
            ui->tbJadwal->setModel(model);
        }

        if(selected_hari == "Senin")
        {
            ui->btSenin->setEnabled(false);
        }
        else if(selected_hari == "Selasa")
        {
            ui->btSelasa->setEnabled(false);
        }
        else if(selected_hari == "Rabu")
        {
            ui->btRabu->setEnabled(false);
        }
        else if(selected_hari == "Kamis")
        {
            ui->btKamis->setEnabled(false);
        }
        else if(selected_hari == "Jumat")
        {
            ui->Jumat->setEnabled(false);
        }
        else
        {
            //QMessageBox::critical(this, "ERROR", "Error Penyeleksian Hari");
            ui->pbSemua->setEnabled(false);
        }
    }
}

void MainWindow::LiveTime(){
    QDateTime currentDateTime = QDateTime::currentDateTime();
    QLocale lokalIndonesia(QLocale::Indonesian, QLocale::Indonesia);
    QString liveTimeText = lokalIndonesia.toString(currentDateTime, "dddd, dd MMMM yyyy - HH:mm:ss");
    ui->lbtime->setText(liveTimeText);

}
void MainWindow::on_btSenin_clicked()
{
    selected_hari = "Senin";
    TampilkanData();
    ui->btSenin->setEnabled(false);
    ui->pbSemua->setEnabled(true);
    ui->btSelasa->setEnabled(true);
    ui->btRabu->setEnabled(true);
    ui->btKamis->setEnabled(true);
    ui->Jumat->setEnabled(true);
}

void MainWindow::on_btRabu_clicked()
{
    selected_hari = "Rabu";
    TampilkanData();
    ui->btSenin->setEnabled(true);
    ui->pbSemua->setEnabled(true);
    ui->btSelasa->setEnabled(true);
    ui->btRabu->setEnabled(false);
    ui->btKamis->setEnabled(true);
    ui->Jumat->setEnabled(true);
}


void MainWindow::on_btKamis_clicked()
{
    selected_hari = "Kamis";
    TampilkanData();
    ui->btSenin->setEnabled(true);
    ui->pbSemua->setEnabled(true);
    ui->btSelasa->setEnabled(true);
    ui->btRabu->setEnabled(true);
    ui->btKamis->setEnabled(false);
    ui->Jumat->setEnabled(true);
}


void MainWindow::on_Jumat_clicked()
{
    selected_hari = "Jumat";
    TampilkanData();
    ui->btSenin->setEnabled(true);
    ui->pbSemua->setEnabled(true);
    ui->btSelasa->setEnabled(true);
    ui->btRabu->setEnabled(true);
    ui->btKamis->setEnabled(true);
    ui->Jumat->setEnabled(false);
}


void MainWindow::on_btSelasa_clicked()
{
    selected_hari = "Selasa";
    TampilkanData();
    ui->btSenin->setEnabled(true);
    ui->pbSemua->setEnabled(true);
    ui->btSelasa->setEnabled(false);
    ui->btRabu->setEnabled(true);
    ui->btKamis->setEnabled(true);
    ui->Jumat->setEnabled(true);
}


void MainWindow::on_btTambahMatkul_clicked()
{
    FormTambahMatkul *form = new FormTambahMatkul();
    form->show();
    this->hide();
}


void MainWindow::on_pbSemua_clicked()
{
    selected_hari = "ALL";
    TampilkanData();
    ui->btSenin->setEnabled(true);
    ui->pbSemua->setEnabled(false);
    ui->btSelasa->setEnabled(true);
    ui->btRabu->setEnabled(true);
    ui->btKamis->setEnabled(true);
    ui->Jumat->setEnabled(true);
}


void MainWindow::on_pbUpdate_clicked()
{
    FormUpdateMatkul *form = new FormUpdateMatkul();
    form->show();
    this->hide();
}


void MainWindow::on_pbDelete_clicked()
{
    FormDeleteMatkul *form = new FormDeleteMatkul();
    form->show();
    this->hide();
}


void MainWindow::on_pushButton_clicked()
{
    FormDaftarTugas *form = new FormDaftarTugas();
    form->show();
    this->hide();
}

