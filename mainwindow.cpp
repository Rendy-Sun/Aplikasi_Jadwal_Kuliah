#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "formtambahmatkul.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlQuery>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);

    //Mengatur Koneksi ke MySql XAMPP
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString databasename = "E:/Project C++/Qt Creator Project/AplikasiJadwal/Database/db_jadwal.db";
    db.setDatabaseName(databasename);

    //Coba Buka Koneksi ke database
    if(!db.open())
    {
        QMessageBox::critical(this, "Koneksi Gagal", "Gagal Terhubung ke database:\n"+db.lastError().text());
        return;
    }
    TampilkanData();
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
    if(selected_hari != ""){
        QSqlQuery query;
        query.prepare("SELECT mata_kuliah AS [MATA KULIAH], dari_jam AS [JAM MULAI] , sampai_jam[JAM SELESAI], ruangan AS [RUANGAN], dosen AS [DOSEN] FROM tabel_jadwal WHERE hari=:selected_hari");
        query.bindValue(":selected_hari", selected_hari);
        query.exec();

        QSqlQueryModel *model = new QSqlQueryModel(this);
        model->setQuery(std::move(query));
        ui->tbJadwal->setModel(model);
    }else{
        QSqlQuery query;
        query.prepare("SELECT hari AS [HARI], mata_kuliah AS [MATA KULIAH], dari_jam AS [JAM MULAI] , sampai_jam[JAM SELESAI], ruangan AS [RUANGAN], dosen AS [DOSEN] FROM tabel_jadwal");
        query.exec();

        QSqlQueryModel *model = new QSqlQueryModel(this);
        model->setQuery(std::move(query));
        ui->tbJadwal->setModel(model);
    }
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
    this->close();
}


void MainWindow::on_pbSemua_clicked()
{
    selected_hari = "";
    TampilkanData();
    ui->btSenin->setEnabled(true);
    ui->pbSemua->setEnabled(false);
    ui->btSelasa->setEnabled(true);
    ui->btRabu->setEnabled(true);
    ui->btKamis->setEnabled(true);
    ui->Jumat->setEnabled(true);
}

