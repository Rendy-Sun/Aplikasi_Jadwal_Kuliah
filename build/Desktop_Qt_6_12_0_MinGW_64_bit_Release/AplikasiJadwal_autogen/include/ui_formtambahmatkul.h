/********************************************************************************
** Form generated from reading UI file 'formtambahmatkul.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTAMBAHMATKUL_H
#define UI_FORMTAMBAHMATKUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormTambahMatkul
{
public:
    QLineEdit *leRuangan;
    QLineEdit *leMatkul;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QComboBox *cbHari;
    QLineEdit *leDosen;
    QTimeEdit *teJamMulai;
    QLabel *label_5;
    QLabel *label_6;
    QTimeEdit *teJamSelesai;
    QPushButton *pbTambah;
    QPushButton *pbKembali;

    void setupUi(QWidget *FormTambahMatkul)
    {
        if (FormTambahMatkul->objectName().isEmpty())
            FormTambahMatkul->setObjectName("FormTambahMatkul");
        FormTambahMatkul->resize(651, 356);
        leRuangan = new QLineEdit(FormTambahMatkul);
        leRuangan->setObjectName("leRuangan");
        leRuangan->setGeometry(QRect(160, 140, 113, 26));
        leMatkul = new QLineEdit(FormTambahMatkul);
        leMatkul->setObjectName("leMatkul");
        leMatkul->setGeometry(QRect(160, 100, 113, 26));
        label = new QLabel(FormTambahMatkul);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 60, 63, 20));
        label_2 = new QLabel(FormTambahMatkul);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 63, 20));
        label_3 = new QLabel(FormTambahMatkul);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(70, 140, 63, 20));
        label_4 = new QLabel(FormTambahMatkul);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(70, 180, 63, 20));
        cbHari = new QComboBox(FormTambahMatkul);
        cbHari->setObjectName("cbHari");
        cbHari->setGeometry(QRect(160, 60, 111, 26));
        leDosen = new QLineEdit(FormTambahMatkul);
        leDosen->setObjectName("leDosen");
        leDosen->setGeometry(QRect(160, 180, 113, 26));
        teJamMulai = new QTimeEdit(FormTambahMatkul);
        teJamMulai->setObjectName("teJamMulai");
        teJamMulai->setGeometry(QRect(440, 60, 118, 26));
        label_5 = new QLabel(FormTambahMatkul);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(340, 60, 81, 20));
        label_6 = new QLabel(FormTambahMatkul);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(340, 100, 81, 20));
        teJamSelesai = new QTimeEdit(FormTambahMatkul);
        teJamSelesai->setObjectName("teJamSelesai");
        teJamSelesai->setGeometry(QRect(440, 100, 118, 26));
        pbTambah = new QPushButton(FormTambahMatkul);
        pbTambah->setObjectName("pbTambah");
        pbTambah->setGeometry(QRect(340, 140, 93, 29));
        pbKembali = new QPushButton(FormTambahMatkul);
        pbKembali->setObjectName("pbKembali");
        pbKembali->setGeometry(QRect(340, 180, 93, 29));

        retranslateUi(FormTambahMatkul);

        QMetaObject::connectSlotsByName(FormTambahMatkul);
    } // setupUi

    void retranslateUi(QWidget *FormTambahMatkul)
    {
        FormTambahMatkul->setWindowTitle(QCoreApplication::translate("FormTambahMatkul", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormTambahMatkul", "Hari", nullptr));
        label_2->setText(QCoreApplication::translate("FormTambahMatkul", "Matkul", nullptr));
        label_3->setText(QCoreApplication::translate("FormTambahMatkul", "Ruangan", nullptr));
        label_4->setText(QCoreApplication::translate("FormTambahMatkul", "Dosen", nullptr));
        label_5->setText(QCoreApplication::translate("FormTambahMatkul", "Jam Mulai", nullptr));
        label_6->setText(QCoreApplication::translate("FormTambahMatkul", "Jam Selesai", nullptr));
        pbTambah->setText(QCoreApplication::translate("FormTambahMatkul", "Tambah", nullptr));
        pbKembali->setText(QCoreApplication::translate("FormTambahMatkul", "Kembali", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTambahMatkul: public Ui_FormTambahMatkul {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTAMBAHMATKUL_H
