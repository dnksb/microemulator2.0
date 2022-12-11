#include "editmodes.h"
#include <iostream>
int Emulator::choise_mode()
{
    if(this->programming_mode)
    {
        return 2;
    }
    else
    {
        if(this->read_mode)
        {
            return 4;
        }
        else if(this->write_mode)
        {
            return 3;
        }
        else if(this->f_mode)
        {
            return 0;
        }
        else if(this->k_mode)
        {
            return 1;
        }
        else
        {
            return 5;
        }
    }
}
QString Emulator::get_register_0()
{
    return this->Register_0;
}
QString Emulator::get_register_1()
{
    return this->Register_1;
}
QString Emulator::get_register_2()
{
    return this->Register_2;
}
QString Emulator::get_register_3()
{
    return this->Register_3;
}
QString Emulator::get_register_4()
{
    return this->Register_4;
}
QString Emulator::get_register_5()
{
    return this->Register_5;
}
QString Emulator::get_register_6()
{
    return this->Register_6;
}
QString Emulator::get_register_7()
{
    return this->Register_7;
}
QString Emulator::get_register_8()
{
    return this->Register_8;
}
QString Emulator::get_register_9()
{
    return this->Register_9;
}
QString Emulator::get_register_A()
{
    return this->Register_A;
}
QString Emulator::get_register_B()
{
    return this->Register_B;
}
QString Emulator::get_register_C()
{
    return this->Register_C;
}
QString Emulator::get_register_D()
{
    return this->Register_D;
}
QString Emulator::get_register_E()
{
    return this->Register_E;
}
QString Emulator::get_register_T()
{
    return this->Register_T;
}
QString Emulator::get_register_Z()
{
    return this->Register_Z;
}
QString Emulator::get_register_Y()
{
    return this->Register_Y;
}
QString Emulator::get_register_X()
{
    return this->Register_X;
}
bool Emulator::get_f_mode()
{
    return this->f_mode;
}
bool Emulator::get_k_mode()
{
    return this->k_mode;
}
bool Emulator::get_write_mode()
{
    return this->write_mode;
}
bool Emulator::get_read_mode()
{
    return this->read_mode;
}
bool Emulator::get_programming_mode()
{
    return this->programming_mode;
}
QString* Emulator::get_code()
{
    return this->code;
}
int Emulator::get_code_pointer()
{
    return this->code_pointer;
}
QString Emulator::get_command()
{
    if(this->code_pointer >= 200) this->code_pointer = 0;
    return this->code[this->code_pointer++];
}
void Emulator::set_register_0 (QString value)
{
    this->Register_0 = value;
}
void Emulator::set_register_1 (QString value)
{
    this->Register_1 = value;
}
void Emulator::set_register_2 (QString value)
{
    this->Register_2 = value;
}
void Emulator::set_register_3 (QString value)
{
    this->Register_3 = value;
}
void Emulator::set_register_4 (QString value)
{
    this->Register_4 = value;
}
void Emulator::set_register_5 (QString value)
{
    this->Register_5 = value;
}
void Emulator::set_register_6 (QString value)
{
    this->Register_6 = value;
}
void Emulator::set_register_7 (QString value)
{
    this->Register_7 = value;
}
void Emulator::set_register_8 (QString value)
{
    this->Register_8 = value;
}
void Emulator::set_register_9 (QString value)
{
    this->Register_9 = value;
}
void Emulator::set_register_A (QString value)
{
    this->Register_A = value;
}
void Emulator::set_register_B (QString value)
{
    this->Register_B = value;
}
void Emulator::set_register_C (QString value)
{
    this->Register_C = value;
}
void Emulator::set_register_D (QString value)
{
    this->Register_D = value;
}
void Emulator::set_register_E (QString value)
{
    this->Register_E = value;
}
void Emulator::set_register_T (QString value)
{
    this->Register_T = value;
}
void Emulator::set_register_Z (QString value)
{
    this->Register_Z = value;
}
void Emulator::set_register_Y (QString value)
{
    this->Register_Y = value;
}
void Emulator::set_register_X (QString value)
{
    this->Register_X = value;
}
void Emulator::set_f_mode (bool value)
{
    this->f_mode = value;
}
void Emulator::set_k_mode (bool value)
{
    this->k_mode = value;
}
void Emulator::set_programming_mode (bool value)
{
    this->programming_mode = value;
}
void Emulator::add_to_register_x(QString value)
{
    this->Register_X += value;
}
void Emulator::set_read_mode(bool value)
{
    this->read_mode = value;
}
void Emulator::set_write_mode(bool value)
{
    this->write_mode = value;
}
void Emulator::add_command(QString value)
{
    if(this->code_pointer >= 200) this->code_pointer = 0;
    this->code[code_pointer++] = value;
}
void Emulator::set_code_pointer(int value)
{
    this->code_pointer = value;
}

Multipult::Multipult(int amount)
{
    this->commands.resize(amount);
}
void Multipult::set_command(int num_button, Mode* mode)
{
    this->commands[num_button] = mode;
}
void Multipult::Button0_clicked(int num_button)
{
    this->commands[num_button]->zero();
}
void Multipult::Button1_clicked(int num_button)
{
    this->commands[num_button]->one();
}
void Multipult::Button2_clicked(int num_button)
{
    this->commands[num_button]->two();
}
void Multipult::Button3_clicked(int num_button)
{
    this->commands[num_button]->three();
}
void Multipult::Button4_clicked(int num_button)
{
    this->commands[num_button]->four();
}
void Multipult::Button5_clicked(int num_button)
{
    this->commands[num_button]->five();
}
void Multipult::Button6_clicked(int num_button)
{
    this->commands[num_button]->six();
}
void Multipult::Button7_clicked(int num_button)
{
    this->commands[num_button]->seven();
}
void Multipult::Button8_clicked(int num_button)
{
    this->commands[num_button]->eigth();
}
void Multipult::Button9_clicked(int num_button)
{
    this->commands[num_button]->nine();
}
void Multipult::ButtonK_clicked(int num_button)
{
    std::cout << "напиши еблан" << std::endl;
}
void Multipult::ButtonF_clicked(int num_button)
{
    std::cout << "напиши еблан" << std::endl;
}
void Multipult::Button_r_clicked(int num_button)
{
    this->commands[num_button]->r();
}
void Multipult::Button_l_clicked(int num_button)
{
    this->commands[num_button]->l();
}
void Multipult::ButtonBO_clicked(int num_button)
{
    this->commands[num_button]->BO();
}
void Multipult::ButtonMemInX_clicked(int num_button)
{
    this->commands[num_button]->mem_to_x();
}
void Multipult::ButtonDot_clicked(int num_button)
{
    this->commands[num_button]->dot();
}
void Multipult::ButtonXInMem_clicked(int num_button)
{
    this->commands[num_button]->x_to_mem();
}
void Multipult::ButtonXZ_clicked(int num_button)
{
    this->commands[num_button]->XZ();
}
void Multipult::ButtonMines_clicked(int num_button)
{
    this->commands[num_button]->mines();
}
void Multipult::ButtonPlus_clicked(int num_button)
{
    this->commands[num_button]->plus();
}
void Multipult::ButtonChangeXY_clicked(int num_button)
{
    this->commands[num_button]->change();
}
void Multipult::ButtonBP_2_clicked(int num_button)
{
    this->commands[num_button]->VP_2();
}
void Multipult::ButtonSP_clicked(int num_button)
{
    this->commands[num_button]->SP();
}
void Multipult::ButtonPP_clicked(int num_button)
{
    this->commands[num_button]->PP();
}
void Multipult::ButtonDivition_clicked(int num_button)
{
    this->commands[num_button]->div();
}
void Multipult::ButtonMultiplu_clicked(int num_button)
{
    this->commands[num_button]->mul();
}
void Multipult::ButtonStackUp_clicked(int num_button)
{
    this->commands[num_button]->push();
}
void Multipult::ButtonCX_clicked(int num_button)
{
    this->commands[num_button]->CX();
}
void Multipult::ButtonBP_1_clicked(int num_button)
{
    this->commands[num_button]->VP_1();
}
