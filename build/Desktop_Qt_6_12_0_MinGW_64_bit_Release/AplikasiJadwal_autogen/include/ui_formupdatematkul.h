/********************************************************************************
** Form generated from reading UI file 'formupdatematkul.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMUPDATEMATKUL_H
#define UI_FORMUPDATEMATKUL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormUpdateMatkul
{
public:
    QComboBox *cbMatkul;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pbKembali;
    QComboBox *cbHari;
    QTimeEdit *teJamMulai;
    QTimeEdit *teJamSelesai;
    QLabel *label_3;
    QLabel *label_4;
    QPushButton *pbUpdate;
    QLabel *label_5;
    QLineEdit *leRuangan;
    QLineEdit *leDosen;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *FormUpdateMatkul)
    {
        if (FormUpdateMatkul->objectName().isEmpty())
            FormUpdateMatkul->setObjectName("FormUpdateMatkul");
        FormUpdateMatkul->resize(528, 435);
        cbMatkul = new QComboBox(FormUpdateMatkul);
        cbMatkul->setObjectName("cbMatkul");
        cbMatkul->setGeometry(QRect(200, 80, 221, 26));
        label = new QLabel(FormUpdateMatkul);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 120, 41, 20));
        label_2 = new QLabel(FormUpdateMatkul);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(90, 80, 101, 20));
        pbKembali = new QPushButton(FormUpdateMatkul);
        pbKembali->setObjectName("pbKembali");
        pbKembali->setGeometry(QRect(80, 350, 93, 29));
        cbHari = new QComboBox(FormUpdateMatkul);
        cbHari->setObjectName("cbHari");
        cbHari->setGeometry(QRect(200, 120, 111, 26));
        teJamMulai = new QTimeEdit(FormUpdateMatkul);
        teJamMulai->setObjectName("teJamMulai");
        teJamMulai->setGeometry(QRect(200, 160, 118, 26));
        teJamSelesai = new QTimeEdit(FormUpdateMatkul);
        teJamSelesai->setObjectName("teJamSelesai");
        teJamSelesai->setGeometry(QRect(200, 200, 118, 26));
        label_3 = new QLabel(FormUpdateMatkul);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(90, 160, 81, 20));
        label_4 = new QLabel(FormUpdateMatkul);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(90, 200, 91, 20));
        pbUpdate = new QPushButton(FormUpdateMatkul);
        pbUpdate->setObjectName("pbUpdate");
        pbUpdate->setGeometry(QRect(340, 350, 93, 29));
        label_5 = new QLabel(FormUpdateMatkul);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 30, 131, 20));
        leRuangan = new QLineEdit(FormUpdateMatkul);
        leRuangan->setObjectName("leRuangan");
        leRuangan->setGeometry(QRect(200, 240, 221, 26));
        leDosen = new QLineEdit(FormUpdateMatkul);
        leDosen->setObjectName("leDosen");
        leDosen->setGeometry(QRect(200, 280, 221, 26));
        label_6 = new QLabel(FormUpdateMatkul);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(90, 240, 63, 20));
        label_7 = new QLabel(FormUpdateMatkul);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(90, 280, 63, 20));

        retranslateUi(FormUpdateMatkul);

        QMetaObject::connectSlotsByName(FormUpdateMatkul);
    } // setupUi

    void retranslateUi(QWidget *FormUpdateMatkul)
    {
        FormUpdateMatkul->setWindowTitle(QCoreApplication::translate("FormUpdateMatkul", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormUpdateMatkul", "Hari", nullptr));
        label_2->setText(QCoreApplication::translate("FormUpdateMatkul", "Daftar Matkul", nullptr));
        pbKembali->setText(QCoreApplication::translate("FormUpdateMatkul", "Kembali", nullptr));
        label_3->setText(QCoreApplication::translate("FormUpdateMatkul", "Jam Mulai", nullptr));
        label_4->setText(QCoreApplication::translate("FormUpdateMatkul", "Jam Selesai", nullptr));
        pbUpdate->setText(QCoreApplication::translate("FormUpdateMatkul", "Update", nullptr));
        label_5->setText(QCoreApplication::translate("FormUpdateMatkul", "UPDATE MATKUL", nullptr));
        label_6->setText(QCoreApplication::translate("FormUpdateMatkul", "Ruangan", nullptr));
        label_7->setText(QCoreApplication::translate("FormUpdateMatkul", "Dosen", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormUpdateMatkul: public Ui_FormUpdateMatkul {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMUPDATEMATKUL_H
