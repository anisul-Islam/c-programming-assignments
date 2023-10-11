#include <stdio.h>
#include <ctype.h>

int main() {
    char uppercase = 'A';
    char lowercase = tolower(uppercase);
    printf("Lowercase: %c\n", lowercase);
    return 0;
}
