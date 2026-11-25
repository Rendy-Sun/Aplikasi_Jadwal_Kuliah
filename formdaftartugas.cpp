#include "formdaftartugas.h"
#include "ui_formdaftartugas.h"
#include "mainwindow.h"
#include <QSqlTableModel>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QMessageBox>
#include <QSqlError>
#include "statusdelegate.h"
#include <QComboBox>

FormDaftarTugas::FormDaftarTugas(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FormDaftarTugas)
{
    ui->setupUi(this);
    TampilkanDaftar();
}

FormDaftarTugas::~FormDaftarTugas()
{
    delete ui;
}

void FormDaftarTugas::on_pbKembali_clicked()
{
    MainWindow *form = new MainWindow();
    form->show();
    this->hide();
}

void FormDaftarTugas::TampilkanDaftar(){
    QSqlDatabase db = QSqlDatabase::database();

    QSqlTableModel *model = new QSqlTableModel(this, db);
    model->setTable("tabel_tugas");
    model->setEditStrategy(QSqlTableModel::OnFieldChange); // perubahan langsung tersimpan ke database

    if (!model->select())
    {
        QMessageBox::critical(this, "Query Error", model->lastError().text());
        return;
    }

    ui->tvTugas->setModel(model);

    int kolomStatus = model->fieldIndex("status");
    ui->tvTugas->setItemDelegateForColumn(kolomStatus, new StatusDelegate(this));

    ui->tvTugas->resizeColumnsToContents();
}
