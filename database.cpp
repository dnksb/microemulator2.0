#include "database.h"


DataBase::DataBase(QWidget *parent):
    QDialog(parent)
{
}

void DataBase::signIn(QString name, QString password)
{
    this->login = name;
    this->password = password;
    if(name == "" || password == "")
    {
        QMessageBox::information(this,"ошибка","логин или пароль не введен",QMessageBox::Ok);
        return;
    }
    else
    {

    }
}

bool DataBase::logIn(QString name, QString password)
{
    this->login = name;
    this->password = password;
    if(name == "" || password == "")
    {
        QMessageBox::information(this,"ошибка","логин или пароль не введен",QMessageBox::Ok);
        return false;
    }
    else
    {

    }
}

bool DataBase::writeCode(QString code[])
{
    return false;
}

void DataBase::loadCode(QString &code)
{

}

DataBase::~DataBase()
{
    delete this->model;
}
