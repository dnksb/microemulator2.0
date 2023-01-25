#ifndef MODE_H
#define MODE_H

#include <QMainWindow>
#include <vector>

class Mode
{
public:
    virtual void one() = 0;
    virtual void two() = 0;
    virtual void three() = 0;
    virtual void four() = 0;
    virtual void five() = 0;
    virtual void six() = 0;
    virtual void seven() = 0;
    virtual void eigth() = 0;
    virtual void nine() = 0;
    virtual void zero() = 0;
    virtual void change() = 0;
    virtual void push() = 0;
    virtual void plus() = 0;
    virtual void mines() = 0;
    virtual void div() = 0;
    virtual void mul() = 0;
    virtual void VP_1() = 0;
    virtual void VP_2() = 0;
    virtual void CX() = 0;
    virtual void PP() = 0;
    virtual void x_to_mem() = 0;
    virtual void mem_to_x() = 0;
    virtual void dot() = 0;
    virtual void XZ() = 0;
    virtual void r() = 0;
    virtual void l() = 0;
    virtual void BO() = 0;
    virtual void SP() = 0;
};

class Emulator
{
private:
    QString Register_0 = "0";
    QString Register_1 = "0";
    QString Register_2 = "0";
    QString Register_3 = "0";
    QString Register_4 = "0";
    QString Register_5 = "0";
    QString Register_6 = "0";
    QString Register_7 = "0";
    QString Register_8 = "0";
    QString Register_9 = "0";
    QString Register_A = "0";
    QString Register_B = "0";
    QString Register_C = "0";
    QString Register_D = "0";
    QString Register_E = "0";
    QString Register_Z = "0";
    QString Register_T = "0";
    QString Register_Y = "0";
    QString Register_X = "";
    QString code[200];
    int code_pointer = 0;
    bool f_mode = false;
    bool k_mode = false;
    bool programming_mode = false;
    bool read_mode = false;
    bool write_mode = false;
public:
    int choise_mode();
    bool get_f_mode();
    bool get_k_mode();
    bool get_read_mode();
    bool get_write_mode();
    QString get_register_0();
    QString get_register_1();
    QString get_register_2();
    QString get_register_3();
    QString get_register_4();
    QString get_register_5();
    QString get_register_6();
    QString get_register_7();
    QString get_register_8();
    QString get_register_9();
    QString get_register_A();
    QString get_register_B();
    QString get_register_C();
    QString get_register_D();
    QString get_register_E();
    QString get_register_T();
    QString get_register_Z();
    QString get_register_Y();
    QString get_register_X();
    QString* get_code();
    QString get_command();
    int get_code_pointer();
    bool get_programming_mode();
    void set_f_mode (bool value);
    void set_k_mode (bool value);
    void set_read_mode(bool value);
    void set_write_mode(bool value);
    void set_register_0 (QString value);
    void set_register_1 (QString value);
    void set_register_2 (QString value);
    void set_register_3 (QString value);
    void set_register_4 (QString value);
    void set_register_5 (QString value);
    void set_register_6 (QString value);
    void set_register_7 (QString value);
    void set_register_8 (QString value);
    void set_register_9 (QString value);
    void set_register_A (QString value);
    void set_register_B (QString value);
    void set_register_C (QString value);
    void set_register_D (QString value);
    void set_register_E (QString value);
    void set_register_T (QString value);
    void set_register_Z (QString value);
    void set_register_Y (QString value);
    void set_register_X (QString value);
    void set_programming_mode (bool value);
    void set_code_pointer(int value);
    void add_command(QString value);
    void add_to_register_x(QString value);
};

class Multipult
{
private:
    std::vector<Mode*> commands;
public:
    Multipult(int amount);
    void set_command(int num_button, Mode* mode);
    void Button0_clicked(int num_button);
    void Button1_clicked(int num_button);
    void Button2_clicked(int num_button);
    void Button3_clicked(int num_button);
    void Button4_clicked(int num_button);
    void Button5_clicked(int num_button);
    void Button6_clicked(int num_button);
    void Button7_clicked(int num_button);
    void Button8_clicked(int num_button);
    void Button9_clicked(int num_button);
    void ButtonK_clicked(int num_button);
    void ButtonF_clicked(int num_button);
    void Button_r_clicked(int num_button);
    void Button_l_clicked(int num_button);
    void ButtonBO_clicked(int num_button);
    void ButtonSP_clicked(int num_button);
    void ButtonXZ_clicked(int num_button);
    void ButtonPP_clicked(int num_button);
    void ButtonCX_clicked(int num_button);
    void ButtonDot_clicked(int num_button);
    void ButtonBP_2_clicked(int num_button);
    void ButtonBP_1_clicked(int num_button);
    void ButtonPlus_clicked(int num_button);
    void ButtonMines_clicked(int num_button);
    void ButtonXInMem_clicked(int num_button);
    void ButtonMemInX_clicked(int num_button);
    void ButtonStackUp_clicked(int num_button);
    void ButtonChangeXY_clicked(int num_button);
    void ButtonDivition_clicked(int num_button);
    void ButtonMultiplu_clicked(int num_button);
};

#endif // MODE_H
