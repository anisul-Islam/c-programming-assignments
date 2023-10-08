// Write a C program that calculate the area of a circle.
#include <stdio.h>
int main()
{
    float Radius;
    printf("Enter Radius: ");
    scanf("%f", &Radius);
    printf("Area of the Circle is: %.3f", 3.14 * Radius * Radius);
    return 0;
}