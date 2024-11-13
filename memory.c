#include "memory.h"
#include <stdio.h>
#include <string.h>

void loadProgramToMemory(CPU *cpu, unsigned char *program, size_t size) {
    memcpy(cpu->memory, program, size);
}

int loadProgramFromFile(CPU *cpu, const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (!file) {
        perror("Failed to open file");
        return -1;
    }
    fread(cpu->memory, 1, MEMORY_SIZE, file);
    fclose(file);
    return 0;
}