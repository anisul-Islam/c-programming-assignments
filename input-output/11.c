#include <stdio.h>

int main() {
    char hexadecimal[] = "1A";
    int decimal;
    sscanf(hexadecimal, "%x", &decimal);
    printf("Octal equivalent: %o\n", decimal);
    return 0;
}
