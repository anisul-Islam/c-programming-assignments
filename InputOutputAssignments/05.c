// Write a program that convert lowercase letter to uppercase using library function.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a Lowercase Character: ");
    scanf("%c", &ch);
    printf("Desired Upper Case: %c\n", toupper(ch));
    return 0;
}