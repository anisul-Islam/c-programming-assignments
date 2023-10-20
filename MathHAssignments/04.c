// Write a program that read any number x and display log10(x).
#include <stdio.h>
#include <math.h>
int main()
{
    int X;
    printf("Enter an Integer: ");
    scanf("%d", &X);
    printf("Common logarith - log10(%d) is: %.2f", X, log10(X));
    return 0;
}