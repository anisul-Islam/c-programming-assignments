// Write a program that read any number x and display log(x).
#include <stdio.h>
#include <math.h>
int main()
{
    int X;
    printf("Enter an Integer: ");
    scanf("%d", &X);
    printf("Natural logarith - log(%d) is: %.2f", X, log(X));
    return 0;
}