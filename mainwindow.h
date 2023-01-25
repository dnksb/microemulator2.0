#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "editmodes.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QMessageBox>
#include "fmode.h"
#include "kmode.h"
#include "programmingmode.h"
#include "readmode.h"
#include "writemode.h"
#include "defaultmode.h"
#include "dialogsignin.h"
#include "dialoglogin.h"
#include "database.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private:
    Emulator* emulator;
    Multipult* multipult;

    DataBase* db;

    DialogSignIn *windowSignIn;
    DialogLogIn *windowLogIn;

    int user_id;
    //QString user_name = "";
    //QString user_password = "";
private slots:
    void update_screen();
    void on_Button0_clicked();
    void on_Button1_clicked();
    void on_Button2_clicked();
    void on_Button3_clicked();
    void on_Button4_clicked();
    void on_Button5_clicked();
    void on_Button6_clicked();
    void on_Button7_clicked();
    void on_Button8_clicked();
    void on_Button9_clicked();
    void on_ButtonK_clicked();
    void on_ButtonF_clicked();
    void on_Button_r_clicked();
    void on_Button_l_clicked();
    void on_ButtonBO_clicked();
    void on_ButtonMemInX_clicked();
    void on_ButtonDot_clicked();
    void on_ButtonXInMem_clicked();
    void on_ButtonXZ_clicked();
    void on_ButtonMines_clicked();
    void on_ButtonPlus_clicked();
    void on_ButtonChangeXY_clicked();
    void on_ButtonBP_2_clicked();
    void on_ButtonSP_clicked();
    void on_ButtonPP_clicked();
    void on_ButtonDivition_clicked();
    void on_ButtonMultiplu_clicked();
    void on_ButtonStackUp_clicked();
    void on_ButtonCX_clicked();
    void on_ButtonBP_1_clicked();
    void on_action_10_triggered();
    void on_action_9_triggered();
    void on_action_11_triggered();

    void on_action_12_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
