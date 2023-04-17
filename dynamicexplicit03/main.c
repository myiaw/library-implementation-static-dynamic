#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include "libXPO.h"

// Explicit, have to open the library and close it during runtime.

int main(int argc, char *argv[]) {
    if (argc < 4) {
        printf("Usage: %s num1 num2 string\n", argv[0]);
        return 1;
    }
    float num1 = atof(argv[2]);
    float num2 = atof(argv[3]);
    char *str = argv[1];

    // Declare function pointers for dynamic linking
    float (*divide_ptr)(float, float);
    char* (*upperString_ptr)(char*);

    // Load the library and library errors
    void* library = dlopen("./libXPO.so", RTLD_LAZY);

    // Get the function pointers
    // dlsym -> assign the function pointer to the function
    divide_ptr = (float (*)(float, float))dlsym(library, "divide");
    upperString_ptr = (char* (*)(char*))dlsym(library, "upperString");

    // Call the functions using function pointers
    float result = divide_ptr(num1, num2);
    printf("Result: %f\n", result);

    upperString_ptr(str);

    printf("Uppercase string: %s\n", str);

    // Close the library
    dlclose(library);

    return 0;
}
