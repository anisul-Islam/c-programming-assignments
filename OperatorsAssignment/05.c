// Write a C program that calculate the area of a rectangle
#include <stdio.h>
int main()
{
    float Width, Length;
    printf("Enter Width & Length: ");
    scanf("%f %f", &Width, &Length);
    printf("Area of the Rectangle is: %.3f", Width * Length);
    return 0;
}