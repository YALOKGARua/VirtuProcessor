#include <stdio.h>
#include "cpu.h"
#include "program_loader.h"
#include "execution.h"
#include "cli.h"

int main(int argc, char *argv[]) {
    CPU cpu;
    initializeCPU(&cpu);

    if (argc > 1) {
        if (loadProgramFromFile(&cpu, argv[1]) != 0) {
            return 1;
        }
        executeInstruction(&cpu, cpu.memory[cpu.pc]);
    } else {
        runCLI(&cpu);
    }
    return 0;
}