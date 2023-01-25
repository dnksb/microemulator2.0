#include "kmode.h"

void KMode::one()
{

}
void KMode::two() {}
void KMode::three() {}
void KMode::four()
{
    this->emulator->set_register_X(QString::number(
                                       abs(this->emulator->get_register_X().toDouble())));
}
void KMode::five()
{
    if(this->emulator->get_register_X().toDouble() < 0)
    {
        this->emulator->set_register_X("-1");
    }
    else if(this->emulator->get_register_X().toDouble() > 0)
    {
        this->emulator->set_register_X("1");
    }
    else
    {
        this->emulator->set_register_X("0");
    }
}
void KMode::six() {}
void KMode::seven()
{
    this->emulator->set_register_X(QString::number(
                                       (int)this->emulator->get_register_X().toDouble()));
}
void KMode::eigth()
{
    this->emulator->set_register_X(QString::number(
                                       this->emulator->get_register_X().toDouble() -
                                       (int)this->emulator->get_register_X().toDouble()));
}
void KMode::nine()
{
    this->emulator->set_register_X(QString::number(
                                       qMax(this->emulator->get_register_X().toDouble(),
                                       this->emulator->get_register_Y().toDouble())));
}
void KMode::zero() {}
void KMode::change() {}
void KMode::push()
{
    this->emulator->set_register_X(QString::number(
                                       (double)(rand() % 1000000) / 1000000.0));
}
void KMode::plus() {}
void KMode::mines() {}
void KMode::div() {}
void KMode::mul() {}
void KMode::VP_1() {}
void KMode::VP_2() {}
void KMode::CX() {}
void KMode::PP() {}
void KMode::x_to_mem() {}
void KMode::mem_to_x() {}
void KMode::dot() {}
void KMode::XZ() {}
void KMode::r() {}
void KMode::l() {}
void KMode::BO() {}
void KMode::SP() {}
