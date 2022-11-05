#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>

class DataBase : public QDialog
{
private:
    QString login = "";
    QString password = "";
    int user_id;
public:
    explicit DataBase(QWidget *parent = nullptr);
    void signIn(QString name, QString password);
    bool logIn(QString name, QString password);
    bool writeCode(QString code[]);
    void loadCode(QString& code);
    ~DataBase();
};

#endif // DATABASE_H
