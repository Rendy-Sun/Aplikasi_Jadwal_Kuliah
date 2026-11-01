#include "formdeletematkul.h"
#include "ui_formdeletematkul.h"
#include "mainwindow.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QMessageBox>
#include <QSqlError>

FormDeleteMatkul::FormDeleteMatkul(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormDeleteMatkul)
{
    ui->setupUi(this);
    FetchData();
}
void FormDeleteMatkul::FetchData(){
    QSqlDatabase db = QSqlDatabase::database();
    QSqlQuery query(db);
    query.prepare("SELECT hari AS [HARI], mata_kuliah AS [MATA KULIAH], dari_jam AS [JAM MULAI], sampai_jam AS [JAM SELESAI], ruangan AS [RUANGAN], dosen AS [DOSEN] FROM tabel_jadwal INNER JOIN tabel_hari ON tabel_jadwal.hari = tabel_hari.nama_hari ORDER BY (tabel_hari.nama_hari) DESC, (tabel_jadwal.dari_jam) ASC");
    if(!query.exec()){
        QMessageBox::critical(this, "ERROR", "Error when fetch data to table :"+query.lastError().text());
        return;
    }
    QSqlQueryModel *model = new QSqlQueryModel(this);
    model->setQuery(query);
    ui->tvDaftarMatkul->setModel(model);
}

FormDeleteMatkul::~FormDeleteMatkul()
{
    delete ui;
}

void FormDeleteMatkul::on_pbKembali_clicked()
{
    MainWindow *form = new MainWindow();
    form->show();
    this->hide();
}

void FormDeleteMatkul::on_tvDaftarMatkul_clicked(const QModelIndex &index)
{
    //ambil index ketika table row di click
    int row = index.row();
    //ambil valuesnya
    QString selected_matkul = index.model()->data(index.model()->index(row, 1)).toString();
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Confirmation Delete Data", "Ingin Menghapus Mata Kuliah "+selected_matkul+"?", QMessageBox::Yes|QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QSqlDatabase db = QSqlDatabase::database();
        QSqlQuery query(db);
        query.prepare("DELETE FROM tabel_jadwal WHERE mata_kuliah=:selected_matkul");
        query.bindValue(":selected_matkul", selected_matkul);
        if(!query.exec()){
            QMessageBox::critical(this, "ERROR", "Error saat menghapus data :" +query.lastError().text());
            return;
        }
        QMessageBox::information(this, "Information", selected_matkul + " Berhasil Dihapus!");
        FetchData();
    }
    else{
        QMessageBox::information(this, "Information", "Batal Menghapus!");
    }
}

