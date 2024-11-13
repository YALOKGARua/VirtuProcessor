#include "utils.h"
#include <stdio.h>

int isValidInstruction(unsigned char opcode) {
    return opcode <= PRINT;
}

void printError(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
}