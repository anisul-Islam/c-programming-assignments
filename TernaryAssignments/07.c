// Write a program that read three numbers and display medium.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    (a > b && a > c && b > c)   ? printf("%d is the Medium", b)
    : (a > b && a > c && b < c) ? printf("%d is the Medium", c)
    : (b > a && b > c && a > c) ? printf("%d is the Medium", a)
    : (b > a && b > c && a < c) ? printf("%d is the Medium", c)
    : (c > a && c > b && a > b) ? printf("%d is the Medium", a)
                                : printf("%d is the Medium", b);
    return 0;
}