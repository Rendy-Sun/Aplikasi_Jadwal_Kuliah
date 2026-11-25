#include "statusdelegate.h"
#include <QComboBox>

StatusDelegate::StatusDelegate(QObject *parent)
    : QStyledItemDelegate(parent)
{
}

QString StatusDelegate::displayText(const QVariant &value, const QLocale &) const
{
    return value.toInt() == 1 ? "Selesai" : "Belum Selesai";
}

QWidget *StatusDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &,
                                      const QModelIndex &) const
{
    QComboBox *combo = new QComboBox(parent);
    combo->addItem("Belum Selesai", 0);   // data = 0
    combo->addItem("Selesai", 1);         // data = 1
    return combo;
}

void StatusDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const
{
    QComboBox *combo = static_cast<QComboBox *>(editor);
    int value = index.model()->data(index, Qt::EditRole).toInt();
    combo->setCurrentIndex(combo->findData(value));
}

void StatusDelegate::setModelData(QWidget *editor, QAbstractItemModel *model,
                                  const QModelIndex &index) const
{
    QComboBox *combo = static_cast<QComboBox *>(editor);
    model->setData(index, combo->currentData().toInt(), Qt::EditRole);
}

void StatusDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option,
                                          const QModelIndex &) const
{
    editor->setGeometry(option.rect);
}