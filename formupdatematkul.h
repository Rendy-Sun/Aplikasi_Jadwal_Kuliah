#ifndef FORMUPDATEMATKUL_H
#define FORMUPDATEMATKUL_H

#include <QWidget>

namespace Ui {
class FormUpdateMatkul;
}

class FormUpdateMatkul : public QWidget
{
    Q_OBJECT

public:
    explicit FormUpdateMatkul(QWidget *parent = nullptr);
    ~FormUpdateMatkul();

private slots:
    void on_pbKembali_clicked();

    void on_pbUpdate_clicked();

    void on_cbMatkul_currentTextChanged(const QString &arg1);

private:
    Ui::FormUpdateMatkul *ui;
    void DaftarMatkul();
    void DaftarHari();
    void GetValues();
    void UpdateData();
};

#endif // FORMUPDATEMATKUL_H
