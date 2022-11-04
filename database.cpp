#include "database.h"


DataBase::DataBase(QString name, QWidget *parent):
    QDialog(parent)
{
    this->sdb.setDatabaseName(name);
    this->model = new QSqlTableModel(this, sdb);
    this->model->setTable("users");
}

void DataBase::signIn(QString name, QString password)
{

    if(name == "" && password == "")
    {
        QMessageBox::information(this,"error","don't input login or password",QMessageBox::Ok);
        return;
    }
    else
    {

    }
}

bool DataBase::logIn(QString name, QString password)
{

    if(name == "" && password == "")
    {
        QMessageBox::information(this,"error","don't input login or password",QMessageBox::Ok);
        return false;
    }
    else
    {

    }
}

bool DataBase::writeCode(QString code[])
{

}

void DataBase::loadCode(QString &code)
{

}

DataBase::~DataBase()
{
    delete this->model;
}
