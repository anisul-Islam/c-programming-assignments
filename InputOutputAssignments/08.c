// Write a program that convert uppercase letter to lowercase without using library function.
#include <stdio.h>
int main()
{
    char upper;
    printf("Enter a upper case: ");
    scanf("%c", &upper);
    printf("Lower case is: %c", upper + 32);
    return 0;
}
