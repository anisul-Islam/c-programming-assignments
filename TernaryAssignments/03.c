// Write a program that read two numbers and display maximum.
#include <stdio.h>
int main()
{
    int N1, N2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &N1, &N2);
    (N1 > N2) ? printf("%d is the Maximum", N1) : printf("%d is the Maximum", N2);
    return 0;
}