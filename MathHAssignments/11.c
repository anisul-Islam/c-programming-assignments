// Write a program that read any angle t and display tan (t).
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    printf("Enter the Angle(Degree): ");
    scanf("%d", &t);
    float radian = (t * 3.14) / 180;
    printf("Tangent of angle %d is: %.2f", t, tan(radian));
    return 0;
}