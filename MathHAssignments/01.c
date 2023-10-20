// Write a program that read any integer and display its absolute value.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int A;
    printf("Enter an Integer: ");
    scanf("%d", &A);
    printf("Absolute is: %d", abs(A));
    return 0;
}