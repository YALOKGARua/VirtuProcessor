#include "cli.h"
#include "execution.h"
#include "utils.h"
#include <stdio.h>
#include <stdlib.h>

void runCLI(CPU *cpu) {
    char input[256];
    while (1) {
        printf("Enter command (HALT, LOAD, ADD, SUB, PRINT, etc.): ");
        if (!fgets(input, sizeof(input), stdin)) {
            break;
        }
        if (strncmp(input, "HALT", 4) == 0) {
            break;
        } else if (strncmp(input, "LOAD", 4) == 0) {
            unsigned char reg;
            int value;
            printf("Register: ");
            scanf("%hhu", &reg);
            printf("Value: ");
            scanf("%d", &value);
            cpu->memory[cpu->pc++] = LOAD;
            cpu->memory[cpu->pc++] = reg;
            *(int *)&cpu->memory[cpu->pc] = value;
            cpu->pc += 4;
        } else if (strncmp(input, "PRINT", 5) == 0) {
            unsigned char reg;
            printf("Register: ");
            scanf("%hhu", &reg);
            cpu->memory[cpu->pc++] = PRINT;
            cpu->memory[cpu->pc++] = reg;
        } else {
            printf("Unknown command\n");
        }
    }
}