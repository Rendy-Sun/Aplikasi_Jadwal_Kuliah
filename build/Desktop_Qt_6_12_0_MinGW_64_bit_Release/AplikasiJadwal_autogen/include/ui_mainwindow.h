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
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTableView *tbJadwal;
    QLabel *lbMatkul;
    QLabel *lbtime;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QPushButton *pbSemua;
    QPushButton *btSenin;
    QPushButton *btSelasa;
    QPushButton *btRabu;
    QPushButton *btKamis;
    QPushButton *Jumat;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_3;
    QVBoxLayout *verticalLayout_2;
    QPushButton *btTambahMatkul;
    QPushButton *pbUpdate;
    QPushButton *pbDelete;
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 568);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tbJadwal = new QTableView(centralwidget);
        tbJadwal->setObjectName("tbJadwal");
        tbJadwal->setGeometry(QRect(180, 80, 561, 441));
        lbMatkul = new QLabel(centralwidget);
        lbMatkul->setObjectName("lbMatkul");
        lbMatkul->setGeometry(QRect(350, 20, 221, 41));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        lbMatkul->setFont(font);
        lbtime = new QLabel(centralwidget);
        lbtime->setObjectName("lbtime");
        lbtime->setGeometry(QRect(40, 30, 281, 20));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(30, 110, 117, 233));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 115, 231));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        pbSemua = new QPushButton(scrollAreaWidgetContents_2);
        pbSemua->setObjectName("pbSemua");

        verticalLayout->addWidget(pbSemua);

        btSenin = new QPushButton(scrollAreaWidgetContents_2);
        btSenin->setObjectName("btSenin");

        verticalLayout->addWidget(btSenin);

        btSelasa = new QPushButton(scrollAreaWidgetContents_2);
        btSelasa->setObjectName("btSelasa");

        verticalLayout->addWidget(btSelasa);

        btRabu = new QPushButton(scrollAreaWidgetContents_2);
        btRabu->setObjectName("btRabu");

        verticalLayout->addWidget(btRabu);

        btKamis = new QPushButton(scrollAreaWidgetContents_2);
        btKamis->setObjectName("btKamis");

        verticalLayout->addWidget(btKamis);

        Jumat = new QPushButton(scrollAreaWidgetContents_2);
        Jumat->setObjectName("Jumat");

        verticalLayout->addWidget(Jumat);

        scrollArea->setWidget(scrollAreaWidgetContents_2);
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setGeometry(QRect(20, 390, 134, 125));
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(-17, -53, 132, 159));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents_3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        btTambahMatkul = new QPushButton(scrollAreaWidgetContents_3);
        btTambahMatkul->setObjectName("btTambahMatkul");

        verticalLayout_2->addWidget(btTambahMatkul);

        pbUpdate = new QPushButton(scrollAreaWidgetContents_3);
        pbUpdate->setObjectName("pbUpdate");

        verticalLayout_2->addWidget(pbUpdate);

        pbDelete = new QPushButton(scrollAreaWidgetContents_3);
        pbDelete->setObjectName("pbDelete");

        verticalLayout_2->addWidget(pbDelete);

        pushButton = new QPushButton(scrollAreaWidgetContents_3);
        pushButton->setObjectName("pushButton");

        verticalLayout_2->addWidget(pushButton);

        scrollArea_2->setWidget(scrollAreaWidgetContents_3);
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 80, 51, 21));
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 360, 61, 21));
        label_2->setFont(font1);
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
        lbMatkul->setText(QCoreApplication::translate("MainWindow", "Jadwal Matkul", nullptr));
        lbtime->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        pbSemua->setText(QCoreApplication::translate("MainWindow", "Semua", nullptr));
        btSenin->setText(QCoreApplication::translate("MainWindow", "Senin", nullptr));
        btSelasa->setText(QCoreApplication::translate("MainWindow", "Selasa", nullptr));
        btRabu->setText(QCoreApplication::translate("MainWindow", "Rabu", nullptr));
        btKamis->setText(QCoreApplication::translate("MainWindow", "Kamis", nullptr));
        Jumat->setText(QCoreApplication::translate("MainWindow", "Jumat", nullptr));
        btTambahMatkul->setText(QCoreApplication::translate("MainWindow", "Tambah Matkul", nullptr));
        pbUpdate->setText(QCoreApplication::translate("MainWindow", "Update Matkul", nullptr));
        pbDelete->setText(QCoreApplication::translate("MainWindow", "Delete Matkul", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Daftar Tugas", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "HARI", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "MENU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
