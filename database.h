#ifndef DATABASE_H
#define DATABASE_H

#include <QDialog>
#include <QMainWindow>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QSqlQueryModel>

class DataBase : public QDialog
{
private:
    QSqlDatabase m_db;

    QString login = "";
    QString password = "";
    int user_id;
public:
    explicit DataBase(QWidget *parent = nullptr);
    bool createUsersTable();
    bool createCodeTable();
    bool signIn(QString name, QString password);
    bool logIn(QString name, QString password);
    bool writeCode(QString code[]);
    void loadCode(QString& code, int id);
    ~DataBase();
};

#endif // DATABASE_H
