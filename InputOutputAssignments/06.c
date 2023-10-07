// Write a program that convert uppercase letter to lowercase using library function.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a Uppercase Character: ");
    scanf("%c", &ch);
    printf("Desired Lower Case: %c\n", tolower(ch));
    return 0;
}