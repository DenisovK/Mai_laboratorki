// main.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "passenger.h"

int main(int argc, char *argv[]) {
    const char *filename = "passengers.dat";
    
    if (argc < 2) {
        fprintf(stderr, "Использование: %s -f | -p <параметр>\n", argv[0]);
        return EXIT_FAILURE;
    }

    if (strcmp(argv[1], "-f") == 0) {
        generatePassengerFile(filename);
        printPassengerFile(filename);
    } else if (strcmp(argv[1], "-p") == 0 && argc == 3) {
        int maxLuggageCount = atoi(argv[2]);
        findPassengersByLuggageCount(filename, maxLuggageCount);
    } else {
        fprintf(stderr, "Неверные параметры.\n");
        return EXIT_FAILURE;
    }

    return EXIT_SUCCESS;
}
