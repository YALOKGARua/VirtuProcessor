#ifndef CPU_H
#define CPU_H

#define MEMORY_SIZE 256
#define REGISTER_COUNT 4

typedef struct {
    int registers[REGISTER_COUNT];
    int pc;
    unsigned char memory[MEMORY_SIZE];
} CPU;

typedef enum {
    HALT,
    LOAD,
    ADD,
    SUB,
    MUL,
    DIV,
    PRINT
} Instruction;

void initializeCPU(CPU *cpu);
void execute(CPU *cpu);
int loadProgramFromFile(CPU *cpu, const char *filename);

#endif