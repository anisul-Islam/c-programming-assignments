// Write a program that read any number x and display its square root.
#include <stdio.h>
#include <math.h>
int main()
{
    int X;
    printf("Enter an Integer: ");
    scanf("%d", &X);
    printf("Square Root of %d is %.2f\n", X, sqrt(X));
    return 0;
}