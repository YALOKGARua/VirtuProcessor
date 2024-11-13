#ifndef PROGRAM_LOADER_H
#define PROGRAM_LOADER_H

#include "cpu.h"

int loadProgramFromFile(CPU *cpu, const char *filename);
int loadProgramFromArray(CPU *cpu, unsigned char *program, size_t size);

#endif