#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    emulator = new Emulator();
    multipult = new Multipult(6);
    multipult->set_command(0, new FMode(emulator));
    multipult->set_command(1, new KMode(emulator));
    multipult->set_command(2, new ProgrammingMode(emulator));
    multipult->set_command(3, new WriteMode(emulator));
    multipult->set_command(4, new ReadMode(emulator));
    multipult->set_command(5, new DefaultMode(emulator));

    db = new DataBase();
    db->createUsersTable();

    connect(ui->Button0, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button1, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button2, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button3, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button4, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button5, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button6, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button7, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button8, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button9, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonCX, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonXZ, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonPP, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button_l, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonBO, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->Button_r, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonSP, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonDot, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonBP_1, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonBP_2, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonPlus, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonMines, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonMemInX, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonXInMem, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonStackUp, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonChangeXY, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonDivition, SIGNAL(clicked()), this, SLOT(update_screen()));
    connect(ui->ButtonMultiplu, SIGNAL(clicked()), this, SLOT(update_screen()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::update_screen()
{
    ui->Lable_Register_0->setText("0 = " + emulator->get_register_0());
    ui->Lable_Register_1->setText("1 = " + emulator->get_register_1());
    ui->Lable_Register_2->setText("2 = " + emulator->get_register_2());
    ui->Lable_Register_3->setText("3 = " + emulator->get_register_3());
    ui->Lable_Register_4->setText("4 = " + emulator->get_register_4());
    ui->Lable_Register_5->setText("5 = " + emulator->get_register_5());
    ui->Lable_Register_6->setText("6 = " + emulator->get_register_6());
    ui->Lable_Register_7->setText("7 = " + emulator->get_register_7());
    ui->Lable_Register_8->setText("8 = " + emulator->get_register_8());
    ui->Lable_Register_9->setText("9 = " + emulator->get_register_9());
    ui->Lable_Register_A->setText("A = " + emulator->get_register_A());
    ui->Lable_Register_B->setText("B = " + emulator->get_register_B());
    ui->Lable_Register_C->setText("C = " + emulator->get_register_C());
    ui->Lable_Register_D->setText("D = " + emulator->get_register_D());
    ui->Lable_Register_E->setText("E = " + emulator->get_register_E());
    ui->Lable_Register_T->setText("T = " + emulator->get_register_T());
    ui->Lable_Register_Z->setText("Z = " + emulator->get_register_Z());
    ui->Lable_Register_Y->setText("Y = " + emulator->get_register_Y());
    ui->Lable_Register_X->setText("X = " + emulator->get_register_X());
    ui->label->setText(emulator->get_register_X());
    this->emulator->set_f_mode(false);
    this->emulator->set_k_mode(false);
}

void MainWindow::on_Button0_clicked()
{
    multipult->Button0_clicked(emulator->choise_mode());
}
void MainWindow::on_Button1_clicked()
{
    multipult->Button1_clicked(emulator->choise_mode());
}
void MainWindow::on_Button2_clicked()
{
    multipult->Button2_clicked(emulator->choise_mode());
}
void MainWindow::on_Button3_clicked()
{
    multipult->Button3_clicked(emulator->choise_mode());
}
void MainWindow::on_Button4_clicked()
{
    multipult->Button4_clicked(emulator->choise_mode());
}
void MainWindow::on_Button5_clicked()
{
    multipult->Button5_clicked(emulator->choise_mode());
}
void MainWindow::on_Button6_clicked()
{
    multipult->Button6_clicked(emulator->choise_mode());
}
void MainWindow::on_Button7_clicked()
{
    multipult->Button7_clicked(emulator->choise_mode());
}
void MainWindow::on_Button8_clicked()
{
    multipult->Button8_clicked(emulator->choise_mode());
}
void MainWindow::on_Button9_clicked()
{
    multipult->Button9_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonK_clicked()
{
    this->emulator->set_k_mode(true);
    this->emulator->set_f_mode(false);
}
void MainWindow::on_ButtonF_clicked()
{
    this->emulator->set_f_mode(true);
    this->emulator->set_k_mode(false);
}
void MainWindow::on_Button_r_clicked()
{
    multipult->Button_r_clicked(emulator->choise_mode());
}
void MainWindow::on_Button_l_clicked()
{
    multipult->Button_l_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonBO_clicked()
{
    multipult->ButtonBO_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonMemInX_clicked()
{
    multipult->ButtonMemInX_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonDot_clicked()
{
    multipult->ButtonDot_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonXInMem_clicked()
{
    multipult->ButtonXInMem_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonXZ_clicked()
{
    multipult->ButtonXZ_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonMines_clicked()
{
    multipult->ButtonMines_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonPlus_clicked()
{
    multipult->ButtonPlus_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonChangeXY_clicked()
{
    multipult->ButtonChangeXY_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonBP_2_clicked()
{
    multipult->ButtonBP_2_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonSP_clicked()
{
    multipult->ButtonSP_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonPP_clicked()
{
    multipult->ButtonPP_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonDivition_clicked()
{
    multipult->ButtonDivition_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonMultiplu_clicked()
{
    multipult->ButtonMultiplu_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonStackUp_clicked()
{
    multipult->ButtonStackUp_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonCX_clicked()
{
    multipult->ButtonCX_clicked(emulator->choise_mode());
}
void MainWindow::on_ButtonBP_1_clicked()
{
    multipult->ButtonBP_1_clicked(emulator->choise_mode());
}

void MainWindow::on_action_10_triggered()
{
    //this->user_password = "";
    //this->user_name = "";
    this->windowLogIn = new DialogLogIn(db, this);
    this->windowLogIn->show();
    //this->user_password = window->password;
    //this->user_name = window->login;
}

void MainWindow::on_action_9_triggered()
{
    this->windowSignIn = new DialogSignIn(db, this);
    this->windowSignIn->show();
}


void MainWindow::on_action_11_triggered()
{
    //this->db->writeCode();
}


void MainWindow::on_action_12_triggered()
{
    //this->db->loadCode();
}

