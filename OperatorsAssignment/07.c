// Write a C program that convert the Celsius temperature to Fahrenheit.
#include <stdio.h>
int main()
{
    float Celsius;
    printf("Enter the Celsius Value: ");
    scanf("%f", &Celsius);
    float Farenheit = (9 * Celsius) / 5.00 + 32;
    printf("Fahrenheit Value is: %.3f\n", Farenheit);
    return 0;
}