#include "readmode.h"

void ReadMode::one()
{
    this->emulator->set_register_X(this->emulator->get_register_1());
    this->emulator->set_read_mode(false);
}
void ReadMode::two()
{
    this->emulator->set_register_X(this->emulator->get_register_2());
    this->emulator->set_read_mode(false);
}
void ReadMode::three()
{
    this->emulator->set_register_X(this->emulator->get_register_3());
    this->emulator->set_read_mode(false);
}
void ReadMode::four()
{
    this->emulator->set_register_X(this->emulator->get_register_4());
    this->emulator->set_read_mode(false);
}
void ReadMode::five()
{
    this->emulator->set_register_X(this->emulator->get_register_5());
    this->emulator->set_read_mode(false);
}
void ReadMode::six()
{
    this->emulator->set_register_X(this->emulator->get_register_6());
    this->emulator->set_read_mode(false);
}
void ReadMode::seven()
{
    this->emulator->set_register_X(this->emulator->get_register_7());
    this->emulator->set_read_mode(false);
}
void ReadMode::eigth()
{
    this->emulator->set_register_X(this->emulator->get_register_8());
    this->emulator->set_read_mode(false);
}
void ReadMode::nine()
{
    this->emulator->set_register_X(this->emulator->get_register_9());
    this->emulator->set_read_mode(false);
}
void ReadMode::zero()
{
    this->emulator->set_register_X(this->emulator->get_register_0());
    this->emulator->set_read_mode(false);
}
void ReadMode::change()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::push()
{
    this->emulator->set_register_X(this->emulator->get_register_E());
    this->emulator->set_read_mode(false);
}
void ReadMode::plus()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::mines()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::div()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::mul()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::VP_1()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::VP_2()
{
    this->emulator->set_register_X(this->emulator->get_register_C());
    this->emulator->set_read_mode(false);
}
void ReadMode::CX()
{
    this->emulator->set_register_X(this->emulator->get_register_D());
    this->emulator->set_read_mode(false);

}
void ReadMode::PP()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::x_to_mem()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::mem_to_x()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::dot()
{
    this->emulator->set_register_X(this->emulator->get_register_A());
    this->emulator->set_read_mode(false);
}
void ReadMode::XZ()
{
    this->emulator->set_register_X(this->emulator->get_register_B());
    this->emulator->set_read_mode(false);
}
void ReadMode::r()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::l()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::BO()
{
    this->emulator->set_read_mode(false);
}
void ReadMode::SP()
{
    this->emulator->set_read_mode(false);
}
