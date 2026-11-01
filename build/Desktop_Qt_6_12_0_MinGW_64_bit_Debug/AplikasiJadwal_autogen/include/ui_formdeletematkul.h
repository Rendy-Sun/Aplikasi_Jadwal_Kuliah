/********************************************************************************
** Form generated from reading UI file 'formdeletematkul.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMDELETEMATKUL_H
#define UI_FORMDELETEMATKUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormDeleteMatkul
{
public:
    QTableView *tvDaftarMatkul;
    QPushButton *pbKembali;
    QLabel *label;

    void setupUi(QWidget *FormDeleteMatkul)
    {
        if (FormDeleteMatkul->objectName().isEmpty())
            FormDeleteMatkul->setObjectName("FormDeleteMatkul");
        FormDeleteMatkul->resize(602, 404);
        tvDaftarMatkul = new QTableView(FormDeleteMatkul);
        tvDaftarMatkul->setObjectName("tvDaftarMatkul");
        tvDaftarMatkul->setGeometry(QRect(60, 60, 491, 271));
        pbKembali = new QPushButton(FormDeleteMatkul);
        pbKembali->setObjectName("pbKembali");
        pbKembali->setGeometry(QRect(250, 350, 93, 29));
        label = new QLabel(FormDeleteMatkul);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 20, 161, 20));

        retranslateUi(FormDeleteMatkul);

        QMetaObject::connectSlotsByName(FormDeleteMatkul);
    } // setupUi

    void retranslateUi(QWidget *FormDeleteMatkul)
    {
        FormDeleteMatkul->setWindowTitle(QCoreApplication::translate("FormDeleteMatkul", "Form", nullptr));
        pbKembali->setText(QCoreApplication::translate("FormDeleteMatkul", "Kembali", nullptr));
        label->setText(QCoreApplication::translate("FormDeleteMatkul", "Hapus Jadwal Matkul", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormDeleteMatkul: public Ui_FormDeleteMatkul {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMDELETEMATKUL_H
