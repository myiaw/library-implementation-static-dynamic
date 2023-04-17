#include <stdio.h>
#include <stdlib.h>
#include "libXPO.h"

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Usage: %s num1 num2 string\n", argv[0]);
        return 1;
    }
    float num1 = atof(argv[2]);
    float num2 = atof(argv[3]);
    char *str = argv[1];

    uint32_t result = divide(num1, num2);
    printf("Result: %u\n", result);

    upperString(str);

    printf("Uppercase string: %s\n", str);

    return 0;
}


