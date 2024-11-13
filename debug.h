#ifndef DEBUG_H
#define DEBUG_H

#include "cpu.h"

void printCPUState(CPU *cpu);
void printMemory(CPU *cpu, int start, int end);

#endif