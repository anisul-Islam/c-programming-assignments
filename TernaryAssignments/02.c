// Write a program to check a number even or odd.
#include <stdio.h>
int main()
{
    int Number;
    printf("Enter a Number: ");
    scanf("%d", &Number);
    (Number % 2 == 0) ? printf("%d is Even", Number) : printf("%d is Odd", Number);
    return 0;
}