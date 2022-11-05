#include "dialoglogin.h"
#include "ui_dialoglogin.h"

DialogLogIn::DialogLogIn(DataBase *_db, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLogIn),
    db(_db)
{
    ui->setupUi(this);
}

DialogLogIn::~DialogLogIn()
{
    delete ui;
}

void DialogLogIn::on_pushButton_3_clicked()
{
    this->login = ui->lineEdit_3->text();
    this->password = ui->lineEdit_4->text();
    db->logIn(login, password);
    this->close();
}


void DialogLogIn::on_pushButton_4_clicked()
{

}

