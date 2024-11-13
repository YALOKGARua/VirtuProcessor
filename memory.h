#ifndef MEMORY_H
#define MEMORY_H

#include "cpu.h"

void loadProgramToMemory(CPU *cpu, unsigned char *program, size_t size);
int loadProgramFromFile(CPU *cpu, const char *filename);

#endif