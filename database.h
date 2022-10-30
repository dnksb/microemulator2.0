#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QMainWindow>

class DataBase
{
private:
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
public:
    explicit DataBase(QString name);
    bool signIn(QString name, QString password);
    bool logIn(QString name, QString password);
    bool writeCode(QString code[]);
    void loadCode(QString* code);
};

#endif // DATABASE_H
