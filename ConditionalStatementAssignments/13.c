// Write a program that read three numbers (a, b, c) and determine the roots of the quadratic equation.
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    printf("Enter a, b, c serially: \n");
    scanf("%f %f %f", &a, &b, &c);
    float D = sqrt((b * b) - (4 * a * c));
    float X1 = (-b + D) / (2 * a);
    float X2 = (-b - D) / (2 * a);
    printf("The Roots are: %.2f %.2f", X1, X2);
    return 0;
}
