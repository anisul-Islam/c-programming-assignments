// Write a program that read three numbers and display medium.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c && b > c)
    {
        printf("%d is the medium.", b);
    }
    else if (a > b && a > c && b < c)
    {
        printf("%d is the medium.", c);
    }
    else if (b > a && b > c && a > c)
    {
        printf("%d is the medium.", a);
    }
    else if (b > a && b > c && a < c)
    {
        printf("%d is the medium.", c);
    }
    else if (c > a && c > b && a > b)
    {
        printf("%d is the medium.", a);
    }
    else
    {
        printf("%d is the medium.", b);
    }

    return 0;
}