// Write a program that read any angle t and display cos (t)
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    printf("Enter the Angle(Degree): ");
    scanf("%d", &t);
    float radian = (t * 3.14) / 180;
    printf("Cosine of angle %d is: %.2f", t, cos(radian));
    return 0;
}