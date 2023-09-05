#include <stdio.h>
#include <string.h>
#include "util.h"

int nextInstruction(char *Word, double *Key) {
    int returnV;

    fscanf(stdin, "%s", Word);

    if (strcmp(Word, "a") == 0) return 1;
    if (strcmp(Word, "t") == 0) return 1;
    if (strcmp(Word, "s") == 0) return 1;
    if (strcmp(Word, "q") == 0) return 1;

    return 0;
}

