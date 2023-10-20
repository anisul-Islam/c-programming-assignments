// Write a program that read three numbers and display maximum.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a >= b && a >= c)
    {
        printf("%d is the Maximum", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the Maximum", b);
    }
    else
    {
        printf("%d is the Maximum", c);
    }

    return 0;
}