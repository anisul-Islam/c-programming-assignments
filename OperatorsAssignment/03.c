// Write a c program that calculate the area of a triangle.
#include <stdio.h>
int main()
{
    float Width, Length;
    printf("Enter Width & Length: ");
    scanf("%f %f", &Width, &Length);
    printf("Area of the Triangle is: %.3f", 0.5 * Width * Length);
    return 0;
}