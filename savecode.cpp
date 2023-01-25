#include "savecode.h"
#include "ui_savecode.h"

SaveCode::SaveCode(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SaveCode)
{
    ui->setupUi(this);
}

SaveCode::~SaveCode()
{
    delete ui;
}

void SaveCode::on_pushButton_clicked()
{

}

