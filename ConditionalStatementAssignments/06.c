// Write a program to check a number even or odd.
#include <stdio.h>
int main()
{
    int Number;
    printf("Enter a Number: ");
    scanf("%d", &Number);
    if (Number % 2 == 0)
    {
        printf("%d is Even", Number);
    }
    else
    {
        printf("%d is Odd", Number);
    }

    return 0;
}