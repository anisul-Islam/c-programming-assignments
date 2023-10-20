// Write a C program that convert the Fahrenheit temperature to Celsius.
#include <stdio.h>
int main()
{
    float Fahrenheit;
    printf("Enter the Fahrenheit Value: ");
    scanf("%f", &Fahrenheit);
    float Celsius = ((Fahrenheit - 32) / 9.00) * 5;
    printf("Celsius Value is: %.3f", Celsius);
    return 0;
}