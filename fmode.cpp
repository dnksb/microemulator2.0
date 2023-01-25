#include "fmode.h"

void FMode::one()
{
    this->emulator->set_register_X(QString::number(
                                       exp(this->emulator->get_register_X().toDouble())));
}
void FMode::two()
{
    this->emulator->set_register_X(QString::number(
                                       log10(this->emulator->get_register_X().toDouble())));
}
void FMode::three()
{
    this->emulator->set_register_X(QString::number(
                                       log(this->emulator->get_register_X().toDouble())));
}
void FMode::four()
{
    this->emulator->set_register_X(QString::number(
                                       asin(this->emulator->get_register_X().toDouble())));
}
void FMode::five()
{
    this->emulator->set_register_X(QString::number(
                                       acos(this->emulator->get_register_X().toDouble())));
}
void FMode::six()
{
    this->emulator->set_register_X(QString::number(
                                       atan(this->emulator->get_register_X().toDouble())));
}
void FMode::seven()
{
    this->emulator->set_register_X(QString::number(
                                       sin(this->emulator->get_register_X().toDouble())));
}
void FMode::eigth()
{
    this->emulator->set_register_X(QString::number(
                                       cos(this->emulator->get_register_X().toDouble())));
}
void FMode::nine()
{
    this->emulator->set_register_X(QString::number(
                                       tan(this->emulator->get_register_X().toDouble())));
}
void FMode::zero()
{
    this->emulator->set_register_X(QString::number(
                                       pow(10.0, this->emulator->get_register_X().toDouble())));
}
void FMode::change()
{
    this->emulator->set_register_X(QString::number(
                                       pow(this->emulator->get_register_X().toDouble(),
                                           this->emulator->get_register_Y().toDouble())));
}
void FMode::push()
{
    QString temp = this->emulator->get_register_T();
    this->emulator->set_register_T(this->emulator->get_register_Z());
    this->emulator->set_register_Z(this->emulator->get_register_Y());
    this->emulator->set_register_Y(this->emulator->get_register_X());
    this->emulator->set_register_X(temp);
}
void FMode::plus()
{
    this->emulator->set_register_X("3.1415926");
}
void FMode::mines()
{
    this->emulator->set_register_X(QString::number(
                                       sqrt(this->emulator->get_register_X().toDouble())));
}
void FMode::div()
{
    this->emulator->set_register_X(QString::number(
                                       1.0 / this->emulator->get_register_X().toDouble()));
}
void FMode::mul()
{
    this->emulator->set_register_X(QString::number(
                                       pow(this->emulator->get_register_X().toDouble(), 2.0)));
}
void FMode::VP_1() {}
void FMode::VP_2() {}
void FMode::CX() {}
void FMode::PP() {}
void FMode::x_to_mem() {}
void FMode::mem_to_x() {}
void FMode::dot()
{
    QString temp = this->emulator->get_register_X();
    this->emulator->set_register_X(this->emulator->get_register_Y());
    this->emulator->set_register_Y(this->emulator->get_register_Z());
    this->emulator->set_register_Z(this->emulator->get_register_T());
    this->emulator->set_register_T(temp);
}
void FMode::XZ() {}
void FMode::r() {}
void FMode::l() {}
void FMode::BO() {}
void FMode::SP() {}
