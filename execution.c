#include "execution.h"
#include "instructions.h"
#include "utils.h"

void executeInstruction(CPU *cpu, unsigned char opcode) {
    switch (opcode) {
        case HALT:
            return;
        case LOAD:
            handleLoad(cpu);
            break;
        case ADD:
            handleAdd(cpu);
            break;
        case SUB:
            handleSub(cpu);
            break;
        case MUL:
            handleMul(cpu);
            break;
        case DIV:
            handleDiv(cpu);
            break;
        case PRINT:
            handlePrint(cpu);
            break;
        case AND:
            handleAnd(cpu);
            break;
        case OR:
            handleOr(cpu);
            break;
        case XOR:
            handleXor(cpu);
            break;
        default:
            printError("Unknown instruction");
    }
}