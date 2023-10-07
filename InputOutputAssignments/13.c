// Write a program that convert octal to hexa-decimal.
#include <stdio.h>
int main()
{
    int Octal;
    printf("Enter an Octal Number: ");
    scanf("%o", &Octal);
    printf("Equivalent Hexa Decimal: %x", Octal);
    return 0;
}
