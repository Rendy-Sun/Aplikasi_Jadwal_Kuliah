#include "formtambahmatkul.h"
#include "ui_formtambahmatkul.h"
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>

FormTambahMatkul::FormTambahMatkul(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormTambahMatkul)
{
    ui->setupUi(this);
    TampilkanHari();
}

FormTambahMatkul::~FormTambahMatkul()
{
    delete ui;
}

void FormTambahMatkul::TampilkanHari(){
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);
    query.prepare("SELECT nama_hari FROM tabel_hari");

    if(!query.exec())
    {
        QMessageBox::critical(this, "Query Error", query.lastError().text());
        return;
    }

    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(std::move(query));
    ui->cbHari->setModel(model);
}

void FormTambahMatkul::TambahData(){
    QString nama_matkul = ui->leMatkul->text();
    QString ruangan = ui->leRuangan->text();
    QString dosen = ui->leDosen->text();
    QTime jam_mulai = ui->teJamMulai->time();
    QTime jam_selesai = ui->teJamSelesai->time();
    QString hari = ui->cbHari->currentText();

    if(nama_matkul == "" || ruangan == "" || jam_mulai.isNull() || jam_selesai.isNull())
    {
        QMessageBox::information(this, "Information", "Tolong isi Semua Data");
    }
    else{
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query(db);

        query.prepare("INSERT INTO tabel_jadwal (mata_kuliah, hari, ruangan, dosen, dari_jam, sampai_jam) VALUES (:mata_kuliah, :hari, :ruangan, :dosen, :dari_jam, :sampai_jam)");
        query.bindValue(":mata_kuliah", nama_matkul);
        query.bindValue(":hari", hari);
        query.bindValue(":ruangan", ruangan);
        query.bindValue(":dosen", dosen);
        query.bindValue(":dari_jam", jam_mulai.toString("hh:mm"));
        query.bindValue(":sampai_jam", jam_selesai.toString("hh:mm"));

        if(!query.exec())
        {
            QMessageBox::critical(this, "ERROR", "Error dalam Query: "+query.lastError().text());
            return;
        }
        else{
            QMessageBox::information(this, "Information", "Tambah Mata Kuliah Berhasil");
            ClearValue();
        }
    }
}

void FormTambahMatkul::on_pbTambah_clicked()
{
    TambahData();
}

void FormTambahMatkul::ClearValue(){
    ui->leMatkul->clear();
    ui->leRuangan->clear();
    ui->leDosen->clear();
    ui->cbHari->clear();
    ui->teJamMulai->clear();
    ui->teJamSelesai->clear();

}
void FormTambahMatkul::on_pbKembali_clicked()
{
    MainWindow *form = new MainWindow();
    form->show();
    this->hide();
}

