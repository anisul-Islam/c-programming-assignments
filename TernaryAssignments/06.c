// Write a program that read three numbers and display minimum.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    (a < b && a < c)   ? printf("%d is the Minimum", a)
    : (b < a && b < c) ? printf("%d is the Minimum", b)
                       : printf("%d is the Minimum", c);
    return 0;
}