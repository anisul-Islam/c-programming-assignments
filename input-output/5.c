#include <stdio.h>
#include <ctype.h>

int main() {
    char lowercase = 'a';
    char uppercase = toupper(lowercase);
    printf("Uppercase: %c\n", uppercase);
    return 0;
}
