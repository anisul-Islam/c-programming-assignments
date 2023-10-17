// Write a program that read any number and display its square root.
#include <stdio.h>
#include <math.h>
int main()
{
    int A;
    printf("Enter an Integer: ");
    scanf("%d", &A);
    printf("Square Root of %d is %.2f\n", A, sqrt(A));
    return 0;
}