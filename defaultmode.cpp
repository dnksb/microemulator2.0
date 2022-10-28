#include "defaultmode.h"

void DefaultMode::one()
{
    this->emulator->add_to_register_x("1");
}
void DefaultMode::two()
{
    this->emulator->add_to_register_x("2");
}
void DefaultMode::three()
{
    this->emulator->add_to_register_x("3");
}
void DefaultMode::four()
{
    this->emulator->add_to_register_x("4");
}
void DefaultMode::five()
{
    this->emulator->add_to_register_x("5");
}
void DefaultMode::six()
{
    this->emulator->add_to_register_x("6");
}
void DefaultMode::seven()
{
    this->emulator->add_to_register_x("7");
}
void DefaultMode::eigth()
{
    this->emulator->add_to_register_x("8");
}
void DefaultMode::nine()
{
    this->emulator->add_to_register_x("9");
}
void DefaultMode::zero()
{
    this->emulator->add_to_register_x("0");
}

void DefaultMode::change()
{
    QString temp = this->emulator->get_register_X();
    this->emulator->set_register_X(this->emulator->get_register_Y());
    this->emulator->set_register_Y(temp);
}
void DefaultMode::push()
{
    this->emulator->set_register_T(this->emulator->get_register_Z());
    this->emulator->set_register_Z(this->emulator->get_register_Y());
    this->emulator->set_register_Y(this->emulator->get_register_X());
}
void DefaultMode::plus()
{
    this->emulator->set_register_X(QString::number(
                                       this->emulator->get_register_X().toDouble() +
                                       this->emulator->get_register_Y().toDouble()));
}
void DefaultMode::mines()
{
    this->emulator->set_register_X(QString::number(
                                       this->emulator->get_register_Y().toDouble() -
                                       this->emulator->get_register_X().toDouble()));
}
void DefaultMode::div()
{
    this->emulator->set_register_X(QString::number(
                                       this->emulator->get_register_Y().toDouble() /
                                       this->emulator->get_register_X().toDouble()));
}
void DefaultMode::mul()
{
    this->emulator->set_register_X(QString::number(
                                       this->emulator->get_register_Y().toDouble() *
                                       this->emulator->get_register_X().toDouble()));
}
void DefaultMode::VP_1()
{

}
void DefaultMode::VP_2()
{

}
void DefaultMode::CX()
{
    this->emulator->set_register_X("");
}
void DefaultMode::PP() {}
void DefaultMode::x_to_mem()
{
    this->emulator->set_write_mode(true);
    this->emulator->set_read_mode(false);
}
void DefaultMode::mem_to_x()
{
    this->emulator->set_read_mode(true);
    this->emulator->set_write_mode(false);
}
void DefaultMode::dot()
{
    this->emulator->add_to_register_x(".");
}
void DefaultMode::XZ()
{
    this->emulator->set_register_X(QString::number(
                                       this->emulator->get_register_X().toDouble() * -1.0));
}
void DefaultMode::r() {}
void DefaultMode::l() {}
void DefaultMode::BO() {}
void DefaultMode::SP() {}
