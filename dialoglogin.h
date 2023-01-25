#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>
#include "database.h"

namespace Ui {
class DialogLogIn;
}

class DialogLogIn : public QDialog
{
    Q_OBJECT

public:
    QString login = "";
    QString password = "";
    DialogLogIn(DataBase *_db = nullptr, QWidget *parent = nullptr);
    ~DialogLogIn();

private slots:
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

private:
    Ui::DialogLogIn *ui;
    DataBase *db;;
};

#endif // DIALOGLOGIN_H
