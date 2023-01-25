#ifndef PROGRAMMINGMODE_H
#define PROGRAMMINGMODE_H

#include "editmodes.h"
#include <QMainWindow>

class ProgrammingMode : public Mode
{
private:
    Emulator* emulator;
public:
    ProgrammingMode(Emulator* _emulator) : emulator(_emulator) {}
    void one() override ;
    void two() override ;
    void three() override ;
    void four() override ;
    void five() override ;
    void six() override ;
    void seven() override ;
    void eigth() override ;
    void nine() override ;
    void zero() override ;
    void change() override ;
    void push() override ;
    void plus() override ;
    void mines() override ;
    void div() override ;
    void mul() override ;
    void VP_1() override ;
    void VP_2() override ;
    void CX() override ;
    void PP() override ;
    void x_to_mem() override ;
    void mem_to_x() override ;
    void dot() override ;
    void XZ() override ;
    void r() override ;
    void l() override ;
    void BO() override ;
    void SP() override ;
};

#endif // PROGRAMMINGMODE_H
