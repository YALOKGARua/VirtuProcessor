#include <stdio.h>

int main() {
    unsigned char program[] = {
        1, 0, 0, 0, 0, 10,
        1, 1, 0, 0, 0, 20,
        2, 0, 1,
        6, 0,
        0
    };

    FILE *file = fopen("program.bin", "wb");
    if (!file) {
        perror("Failed to create file");
        return 1;
    }

    fwrite(program, sizeof(program), 1, file);
    fclose(file);

    return 0;
}