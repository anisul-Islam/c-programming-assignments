// Write a c program that calculate the area of a triangle, 3 sides length are given.
#include <stdio.h>
#include <math.h>
int main()
{
    int A, B, C;
    printf("Enter all the Three sides of the Triagle: ");
    scanf("%d %d %d", &A, &B, &C);
    double S = (A + B + C) / 2.0;
    double Area = sqrt(S * (S - A) * (S - B) * (S - C));
    printf("Area is: %llf", Area);
    return 0;
}