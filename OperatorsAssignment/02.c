// Write a program that add, subtract, multiply, divide 2 integers/floating point number.
#include <stdio.h>
int main()
{
    float A, B;
    printf("Enter Two Flaoting Point Value: ");
    scanf("%f %f", &A, &B);
    printf("Addition is: %.3f\n", A + B);
    printf("Subtraction is: %.3f\n", A - B);
    printf("Multiplication is: %.3f\n", A * B);
    printf("Division is: %.3f\n", A / B);
    return 0;
}