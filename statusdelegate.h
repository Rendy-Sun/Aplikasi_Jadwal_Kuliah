#ifndef STATUSDELEGATE_H
#define STATUSDELEGATE_H

#include <QObject>
#include <QStyledItemDelegate>

class StatusDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit StatusDelegate(QObject *parent = nullptr);

    // Tampilan teks (saat tidak diedit): 1 -> "Selesai", 0 -> "Belum Selesai"
    QString displayText(const QVariant &value, const QLocale &locale) const override;

    // Editor berupa combobox
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option,
                          const QModelIndex &index) const override;

    // Isi combobox dari data model
    void setEditorData(QWidget *editor, const QModelIndex &index) const override;

    // Simpan pilihan combobox ke model
    void setModelData(QWidget *editor, QAbstractItemModel *model,
                      const QModelIndex &index) const override;

    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                              const QModelIndex &index) const override;
};

#endif // STATUSDELEGATE_H