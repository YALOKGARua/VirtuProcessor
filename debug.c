#include "debug.h"
#include <stdio.h>

void printCPUState(CPU *cpu) {
    printf("PC: %d\n", cpu->pc);
    for (int i = 0; i < REGISTER_COUNT; i++) {
        printf("R%d: %d\n", i, cpu->registers[i]);
    }
}

void printMemory(CPU *cpu, int start, int end) {
    if (start < 0 || end >= MEMORY_SIZE || start > end) {
        printf("Invalid memory range\n");
        return;
    }
    for (int i = start; i <= end; i++) {
        printf("Memory[%d] = %d\n", i, cpu->memory[i]);
    }
}