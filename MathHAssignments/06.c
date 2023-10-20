// Write a program that read any number x and display e to the power x.
#include <stdio.h>
#include <math.h>
int main()
{
    int X;
    printf("Enter an Integer: ");
    scanf("%d", &X);
    printf("Exponantial of X is: %f\n", exp(X));
    return 0;
}