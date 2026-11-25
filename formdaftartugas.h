#ifndef FORMDAFTARTUGAS_H
#define FORMDAFTARTUGAS_H

#include <QWidget>

namespace Ui {
class FormDaftarTugas;
}

class FormDaftarTugas : public QWidget
{
    Q_OBJECT

public:
    explicit FormDaftarTugas(QWidget *parent = nullptr);
    ~FormDaftarTugas();

private slots:
    void on_pbKembali_clicked();

private:
    Ui::FormDaftarTugas *ui;
    void TampilkanDaftar();
};

#endif // FORMDAFTARTUGAS_H
