#ifndef FORMTAMBAHMATKUL_H
#define FORMTAMBAHMATKUL_H

#include <QWidget>

namespace Ui {
class FormTambahMatkul;
}

class FormTambahMatkul : public QWidget
{
    Q_OBJECT

public:
    explicit FormTambahMatkul(QWidget *parent = nullptr);
    ~FormTambahMatkul();

private slots:
    void on_pbTambah_clicked();

    void on_pbKembali_clicked();

private:
    Ui::FormTambahMatkul *ui;
    void TampilkanHari();
    void TambahData();
    void ClearValue();
};

#endif // FORMTAMBAHMATKUL_H
