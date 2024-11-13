#include "cpu.h"
#include "instructions.h"
#include "utils.h"
#include "debug.h"

void execute(CPU *cpu) {
    while (1) {
        unsigned char opcode = cpu->memory[cpu->pc];
        if (!isValidInstruction(opcode)) {
            printError("Invalid instruction");
            return;
        }
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
            default:
                printError("Unknown instruction");
                return;
        }
        printCPUState(cpu);
    }
}