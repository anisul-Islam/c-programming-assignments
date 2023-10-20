// Write a program that convert octal to decimal.
#include <stdio.h>
int main()
{
    int Octal;
    printf("Enter an Octal Number: ");
    scanf("%o", &Octal);
    printf("Equivalent Decimal Number is: %lu", Octal);
    return 0;
}