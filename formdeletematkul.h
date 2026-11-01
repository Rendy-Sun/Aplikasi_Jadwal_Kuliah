#ifndef FORMDELETEMATKUL_H
#define FORMDELETEMATKUL_H

#include <QWidget>

namespace Ui {
class FormDeleteMatkul;
}

class FormDeleteMatkul : public QWidget
{
    Q_OBJECT

public:
    explicit FormDeleteMatkul(QWidget *parent = nullptr);
    ~FormDeleteMatkul();

private slots:
    void on_pbKembali_clicked();

    void on_tvDaftarMatkul_clicked(const QModelIndex &index);

private:
    Ui::FormDeleteMatkul *ui;
    void FetchData();
    void DeleteData();
};

#endif // FORMDELETEMATKUL_H
