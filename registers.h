#ifndef REGISTERS_H
#define REGISTERS_H

#include "cpu.h"

void setRegister(CPU *cpu, int reg, int value);
int getRegister(CPU *cpu, int reg);

#endif