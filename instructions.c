#include "instructions.h"
#include <stdio.h>

void handleAnd(CPU *cpu) {
    unsigned char reg1 = cpu->memory[cpu->pc + 1];
    unsigned char reg2 = cpu->memory[cpu->pc + 2];
    cpu->registers[reg1] &= cpu->registers[reg2];
    cpu->pc += 3;
}

void handleOr(CPU *cpu) {
    unsigned char reg1 = cpu->memory[cpu->pc + 1];
    unsigned char reg2 = cpu->memory[cpu->pc + 2];
    cpu->registers[reg1] |= cpu->registers[reg2];
    cpu->pc += 3;
}

void handleXor(CPU *cpu) {
    unsigned char reg1 = cpu->memory[cpu->pc + 1];
    unsigned char reg2 = cpu->memory[cpu->pc + 2];
    cpu->registers[reg1] ^= cpu->registers[reg2];
    cpu->pc += 3;
}

void handleLoad(CPU *cpu) {
    unsigned char reg = cpu->memory[cpu->pc + 1];
    int value = *(int *)&cpu->memory[cpu->pc + 2];
    cpu->registers[reg] = value;
    cpu->pc += 6;
}

void handleAdd(CPU *cpu) {
    unsigned char reg1 = cpu->memory[cpu->pc + 1];
    unsigned char reg2 = cpu->memory[cpu->pc + 2];
    cpu->registers[reg1] += cpu->registers[reg2];
    cpu->pc += 3;
}

void handleSub(CPU *cpu) {
    unsigned char reg1 = cpu->memory[cpu->pc + 1];
    unsigned char reg2 = cpu->memory[cpu->pc + 2];
    cpu->registers[reg1] -= cpu->registers[reg2];
    cpu->pc += 3;
}

void handleMul(CPU *cpu) {
    unsigned char reg1 = cpu->memory[cpu->pc + 1];
    unsigned char reg2 = cpu->memory[cpu->pc + 2];
    cpu->registers[reg1] *= cpu->registers[reg2];
    cpu->pc += 3;
}

void handleDiv(CPU *cpu) {
    unsigned char reg1 = cpu->memory[cpu->pc + 1];
    unsigned char reg2 = cpu->memory[cpu->pc + 2];
    if (cpu->registers[reg2] != 0) {
        cpu->registers[reg1] /= cpu->registers[reg2];
    }
    cpu->pc += 3;
}

void handlePrint(CPU *cpu) {
    unsigned char reg = cpu->memory[cpu->pc + 1];
    printf("R%d = %d\n", reg, cpu->registers[reg]);
    cpu->pc += 2;
}