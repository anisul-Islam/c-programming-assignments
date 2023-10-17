// Write a program that read two numbers (x, y) and display the value of x^y.
#include <stdio.h>
#include <math.h>
int main()
{
    int X, Y;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &X, &Y);
    printf("%d to the power %d is: %.0f\n", X, Y, pow(X, Y));
    return 0;
}