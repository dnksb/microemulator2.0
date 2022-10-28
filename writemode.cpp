#include "writemode.h"

void WriteMode::one()
{
    this->emulator->set_register_1(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::two()
{
    this->emulator->set_register_2(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::three()
{
    this->emulator->set_register_3(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::four()
{
    this->emulator->set_register_4(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::five()
{
    this->emulator->set_register_5(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::six()
{
    this->emulator->set_register_6(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::seven()
{
    this->emulator->set_register_7(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::eigth()
{
    this->emulator->set_register_8(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::nine()
{
    this->emulator->set_register_9(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::zero()
{
    this->emulator->set_register_0(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::change()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::push()
{
    this->emulator->set_register_E(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::plus()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::mines()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::div()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::mul()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::VP_1()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::VP_2()
{
    this->emulator->set_register_C(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::CX()
{
    this->emulator->set_register_D(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);

}
void WriteMode::PP()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::x_to_mem()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::mem_to_x()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::dot()
{
    this->emulator->set_register_A(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::XZ()
{
    this->emulator->set_register_B(this->emulator->get_register_X());
    this->emulator->set_write_mode(false);
}
void WriteMode::r()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::l()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::BO()
{
    this->emulator->set_write_mode(false);
}
void WriteMode::SP()
{
    this->emulator->set_write_mode(false);
}
