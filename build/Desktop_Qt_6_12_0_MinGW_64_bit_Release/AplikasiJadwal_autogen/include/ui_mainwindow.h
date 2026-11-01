/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *btSenin;
    QPushButton *btRabu;
    QPushButton *btKamis;
    QPushButton *Jumat;
    QTableView *tbJadwal;
    QLabel *lbMatkul;
    QPushButton *btSelasa;
    QPushButton *btTambahMatkul;
    QPushButton *pbSemua;
    QPushButton *pbUpdate;
    QPushButton *pbDelete;
    QLabel *lbtime;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        btSenin = new QPushButton(centralwidget);
        btSenin->setObjectName("btSenin");
        btSenin->setGeometry(QRect(40, 160, 93, 29));
        btRabu = new QPushButton(centralwidget);
        btRabu->setObjectName("btRabu");
        btRabu->setGeometry(QRect(40, 260, 93, 29));
        btKamis = new QPushButton(centralwidget);
        btKamis->setObjectName("btKamis");
        btKamis->setGeometry(QRect(40, 310, 93, 29));
        Jumat = new QPushButton(centralwidget);
        Jumat->setObjectName("Jumat");
        Jumat->setGeometry(QRect(40, 360, 93, 29));
        tbJadwal = new QTableView(centralwidget);
        tbJadwal->setObjectName("tbJadwal");
        tbJadwal->setGeometry(QRect(190, 130, 561, 301));
        lbMatkul = new QLabel(centralwidget);
        lbMatkul->setObjectName("lbMatkul");
        lbMatkul->setGeometry(QRect(410, 90, 101, 20));
        btSelasa = new QPushButton(centralwidget);
        btSelasa->setObjectName("btSelasa");
        btSelasa->setGeometry(QRect(40, 210, 93, 29));
        btTambahMatkul = new QPushButton(centralwidget);
        btTambahMatkul->setObjectName("btTambahMatkul");
        btTambahMatkul->setGeometry(QRect(190, 460, 121, 29));
        pbSemua = new QPushButton(centralwidget);
        pbSemua->setObjectName("pbSemua");
        pbSemua->setGeometry(QRect(40, 110, 93, 29));
        pbUpdate = new QPushButton(centralwidget);
        pbUpdate->setObjectName("pbUpdate");
        pbUpdate->setGeometry(QRect(350, 460, 93, 29));
        pbDelete = new QPushButton(centralwidget);
        pbDelete->setObjectName("pbDelete");
        pbDelete->setGeometry(QRect(480, 460, 93, 29));
        lbtime = new QLabel(centralwidget);
        lbtime->setObjectName("lbtime");
        lbtime->setGeometry(QRect(40, 40, 281, 20));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btSenin->setText(QCoreApplication::translate("MainWindow", "Senin", nullptr));
        btRabu->setText(QCoreApplication::translate("MainWindow", "Rabu", nullptr));
        btKamis->setText(QCoreApplication::translate("MainWindow", "Kamis", nullptr));
        Jumat->setText(QCoreApplication::translate("MainWindow", "Jumat", nullptr));
        lbMatkul->setText(QCoreApplication::translate("MainWindow", "Jadwal Matkul", nullptr));
        btSelasa->setText(QCoreApplication::translate("MainWindow", "Selasa", nullptr));
        btTambahMatkul->setText(QCoreApplication::translate("MainWindow", "Tambah Matkul", nullptr));
        pbSemua->setText(QCoreApplication::translate("MainWindow", "Semua", nullptr));
        pbUpdate->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        pbDelete->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        lbtime->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
