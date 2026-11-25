/********************************************************************************
** Form generated from reading UI file 'formdaftartugas.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDAFTARTUGAS_H
#define UI_FORMDAFTARTUGAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormDaftarTugas
{
public:
    QPushButton *pbKembali;
    QTableView *tvTugas;

    void setupUi(QWidget *FormDaftarTugas)
    {
        if (FormDaftarTugas->objectName().isEmpty())
            FormDaftarTugas->setObjectName("FormDaftarTugas");
        FormDaftarTugas->resize(630, 549);
        pbKembali = new QPushButton(FormDaftarTugas);
        pbKembali->setObjectName("pbKembali");
        pbKembali->setGeometry(QRect(190, 390, 93, 29));
        tvTugas = new QTableView(FormDaftarTugas);
        tvTugas->setObjectName("tvTugas");
        tvTugas->setGeometry(QRect(60, 70, 471, 231));

        retranslateUi(FormDaftarTugas);

        QMetaObject::connectSlotsByName(FormDaftarTugas);
    } // setupUi

    void retranslateUi(QWidget *FormDaftarTugas)
    {
        FormDaftarTugas->setWindowTitle(QCoreApplication::translate("FormDaftarTugas", "Form", nullptr));
        pbKembali->setText(QCoreApplication::translate("FormDaftarTugas", "Kembali", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormDaftarTugas: public Ui_FormDaftarTugas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDAFTARTUGAS_H
