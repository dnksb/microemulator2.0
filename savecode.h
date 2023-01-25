#ifndef SAVECODE_H
#define SAVECODE_H

#include <QDialog>
#include "database.h"

namespace Ui {
class SaveCode;
}

class SaveCode : public QDialog
{
    Q_OBJECT

public:
    explicit SaveCode(QWidget *parent = nullptr);
    ~SaveCode();

private slots:
    void on_pushButton_clicked();

private:
    QString login = "";
    QString password = "";

    Ui::SaveCode *ui;
};

#endif // SAVECODE_H
