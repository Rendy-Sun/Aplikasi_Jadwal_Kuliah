#include "formupdatematkul.h"
#include "ui_formupdatematkul.h"
#include "mainwindow.h"

#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>

FormUpdateMatkul::FormUpdateMatkul(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormUpdateMatkul)
{
    ui->setupUi(this);
    DaftarMatkul();
    DaftarHari();
    GetValues();
}

FormUpdateMatkul::~FormUpdateMatkul()
{
    delete ui;
}

void FormUpdateMatkul::DaftarMatkul(){
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);

    query.prepare("SELECT mata_kuliah FROM tabel_jadwal ORDER BY (hari) DESC, (dari_jam) ASC");
    if(!query.exec())
    {
        QMessageBox::critical(this, "ERROR", "Error Query: " + query.lastError().text());
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(std::move(query));
    ui->cbMatkul->setModel(model);
}

void FormUpdateMatkul::DaftarHari(){
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);

    query.prepare("SELECT nama_hari FROM tabel_hari");
    if(!query.exec()){
        QMessageBox::critical(this, "ERROR", "Daftar Hari Query Error! :" +query.lastError().text());
        return;
    }
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(std::move(query));
    ui->cbHari->setModel(model);
}

void FormUpdateMatkul::GetValues(){
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);
    QString selectedMatkul = ui->cbMatkul->currentText();
    query.prepare("SELECT hari, dari_jam, sampai_jam, ruangan, dosen FROM tabel_jadwal WHERE mata_kuliah=:mata_kuliah");
    query.bindValue(":mata_kuliah", selectedMatkul);

    if(!query.exec()){
        QMessageBox::critical(this, "ERROR", "Error Get Values When Querying :" + query.lastError().text());
        return;
    }
    //Proses agar query di baca satu persatu kolom lalu di masukkan valuesnya ke variabels
    if(query.next()){
        QString hari = query.value("hari").toString();
        QTime jam_mulai = query.value("dari_jam").toTime();
        QTime jam_selesai = query.value("sampai_jam").toTime();
        QString ruangan = query.value("ruangan").toString();
        QString dosen = query.value("dosen").toString();

        ui->cbHari->setCurrentText(hari);
        ui->teJamMulai->setTime(jam_mulai);
        ui->teJamSelesai->setTime(jam_selesai);
        ui->leRuangan->setText(ruangan);
        ui->leDosen->setText(dosen);
    }
}

void FormUpdateMatkul::UpdateData(){
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);
    query.prepare("UPDATE tabel_jadwal SET hari=:hari, dari_jam=:jam_mulai, sampai_jam=:jam_selesai, dosen=:dosen, ruangan=:ruangan WHERE mata_kuliah=:selected_matkul");

    QString hari = ui->cbHari->currentText();
    QString jam_mulai = ui->teJamMulai->time().toString("hh:mm");
    QString jam_selesai = ui->teJamSelesai->time().toString("hh:mm");
    QString dosen = ui->leDosen->text();
    QString ruangan = ui->leRuangan->text();
    QString selected_matkul = ui->cbMatkul->currentText();

    query.bindValue(":hari", hari);
    query.bindValue(":jam_mulai", jam_mulai);
    query.bindValue(":jam_selesai", jam_selesai);
    query.bindValue(":dosen", dosen);
    query.bindValue(":ruangan", ruangan);
    query.bindValue(":selected_matkul", selected_matkul);

    if(query.exec()){
        QMessageBox::information(this, "INFORMATION", "Updating Data Success");
        return;
    }else{
        QMessageBox::critical(this, "ERROR", "Error Query When updating values :" +query.lastError().text());
        return;
    }
}

void FormUpdateMatkul::on_pbKembali_clicked()
{
    MainWindow *form = new MainWindow();
    form->show();
    this->hide();
}


void FormUpdateMatkul::on_pbUpdate_clicked()
{
    UpdateData();
}


void FormUpdateMatkul::on_cbMatkul_currentTextChanged(const QString &arg1)
{
    GetValues();
}

