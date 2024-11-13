#include "program_loader.h"
#include <stdio.h>
#include <string.h>

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

int loadProgramFromArray(CPU *cpu, unsigned char *program, size_t size) {
    if (size > MEMORY_SIZE) {
        printf("Program size exceeds memory limits\n");
        return -1;
    }
    memcpy(cpu->memory, program, size);
    return 0;
}