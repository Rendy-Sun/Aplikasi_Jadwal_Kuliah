#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;
    QString selected_hari = "";

private slots:
    void on_btSenin_clicked();

    void on_btRabu_clicked();

    void on_btKamis_clicked();

    void on_Jumat_clicked();

    void on_btSelasa_clicked();

    void on_btTambahMatkul_clicked();

    void on_pbSemua_clicked();

    void on_pbUpdate_clicked();

    void on_pbDelete_clicked();

private:
    Ui::MainWindow *ui;
    void TampilkanData();
    void LiveTime();
};
#endif // MAINWINDOW_H
