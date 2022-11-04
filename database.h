#ifndef DATABASE_H
#define DATABASE_H

#include <QtSql>
#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>

class DataBase : public QDialog
{
private:
    QSqlDatabase sdb = QSqlDatabase::addDatabase("QSQLITE");
    QSqlTableModel * model;
public:
    DataBase(QString name, QWidget *parent = nullptr);
    void signIn(QString name, QString password);
    bool logIn(QString name, QString password);
    bool writeCode(QString code[]);
    void loadCode(QString& code);
    ~DataBase();
};

#endif // DATABASE_H
