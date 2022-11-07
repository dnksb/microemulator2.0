#include "database.h"


DataBase::DataBase(QWidget *parent):
    QDialog(parent)
{
    m_db = QSqlDatabase::addDatabase("QSQLITE");
    m_db.setDatabaseName("database.sqlite");

    if (!m_db.open())
        qDebug() << "Error: connection with database fail";
    else
        qDebug() << "Database: connection ok";

}

bool DataBase::createUsersTable()
{
    bool success = true;
    QSqlQuery query;

    query.prepare("CREATE TABLE users("
                  "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                  "login TEXT,"
                  "password TEXT );");

    if (!query.exec())
    {
        qDebug() << "Music list table already created ";
        success = false;
    }

    return success;
}

bool DataBase::createCodeTable()
{
    bool success = true;
    QSqlQuery query;
    if(this->login.isEmpty())
    {
        QMessageBox::information(this, "ошибка", "в не авторизированы", QMessageBox::Ok);
    }
    query.prepare("CREATE TABLE " + this->login + "("
                  "id INTEGER PRIMARY KEY AUTOINCREMENT,"
                  "code TEXT);");

    if (!query.exec())
    {
        qDebug() << "Music list table already created ";
        success = false;
    }

    return success;
}

bool DataBase::signIn(QString name, QString password)
{
    this->login = name;
    this->password = password;
    bool success = false;

    if(this->login == "" || this->password == "")
    {
        QMessageBox::information(this,"ошибка","логин или пароль не введен",QMessageBox::Ok);
    }
    else
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("SELECT * FROM users");

        if(queryAdd.exec())
        {
            QSqlRecord rec = queryAdd.record();

            while (queryAdd.next()) {
                if(queryAdd.value(rec.indexOf("login")).toString() == this->login)
                {
                    if(queryAdd.value(rec.indexOf("password")).toString() == this->password)
                    {
                        success = true;
                        this->user_id = queryAdd.value(rec.indexOf("id")).toInt();
                    }
                }
            }
            if(!success)
            {
                QMessageBox::information(this, "ошибка", "пользователь не найден", QMessageBox::Ok);
            }
        }
        else
        {
            qDebug() << "record could not add: " << queryAdd.lastError();
            QMessageBox::information(this, "ошибка", "пользователь не найден", QMessageBox::Ok);
        }
    }

    return success;
}

bool DataBase::logIn(QString name, QString password)
{
    this->login = name;
    this->password = password;
    bool success = false;

    if(this->login.isEmpty() || this->password.isEmpty())
    {
        QMessageBox::information(this,"ошибка","логин или пароль не введен",QMessageBox::Ok);
    }
    else
    {
        QSqlQuery queryAdd;
        queryAdd.prepare("INSERT INTO users (id,login,password) VALUES (:id,:login,:password)");
        queryAdd.bindValue(":login", this->login);
        queryAdd.bindValue(":password", this->password);

        if(!queryAdd.exec())
        {
            qDebug() << "record could not add: " << queryAdd.lastError();
            QMessageBox::information(this, "ошибка", "не получилось создать пользователя", QMessageBox::Ok);
        }
        else
        {
            success = true;

            QSqlQuery queryAdd;
            queryAdd.prepare("SELECT * FROM users");

            if(queryAdd.exec())
            {
                QSqlRecord rec = queryAdd.record();

                while (queryAdd.next()) {
                    if(queryAdd.value(rec.indexOf("login")).toString() == this->login)
                    {
                        if(queryAdd.value(rec.indexOf("password")).toString() == this->password)
                        {
                            this->user_id = queryAdd.value(rec.indexOf("id")).toInt();
                        }
                    }
                }
            }
        }
    }

    return success;
}

bool DataBase::writeCode(QString code[105])
{
    bool success = true;

    this->createCodeTable();

    QString str = "";

    for (int i = 0; i < 105; i++) {
        str += code[i] + ";";
    }

    QSqlQuery queryAdd;
    queryAdd.prepare("INSERT INTO " + this->login + " (id,code) VALUES (:id,:code)");
    queryAdd.bindValue(":code", str);

    if(!queryAdd.exec())
    {
        qDebug() << "record could not add: " << queryAdd.lastError();
        QMessageBox::information(this, "ошибка", "что-то пошло не так", QMessageBox::Ok);
        success = false;
    }
    return success;
}

void DataBase::loadCode(QString &code, int id)
{
    if(this->createCodeTable())
    {
        QMessageBox::information(this, "ошибка", "у вас нет записей", QMessageBox::Ok);
    }
    else
    {

    }
}

DataBase::~DataBase()
{
    if (m_db.isOpen())
        m_db.close();
}
