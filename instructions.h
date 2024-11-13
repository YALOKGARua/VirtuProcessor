#ifndef INSTRUCTIONS_H
#define INSTRUCTIONS_H

#include "cpu.h"

void handleLoad(CPU *cpu);
void handleAdd(CPU *cpu);
void handleSub(CPU *cpu);
void handleMul(CPU *cpu);
void handleDiv(CPU *cpu);
void handlePrint(CPU *cpu);

#endif