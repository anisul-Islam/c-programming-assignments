// Write a program that read any angle t and display sin (t).
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    printf("Enter the Angle(Degree): ");
    scanf("%d", &t);
    float radian = (t * 3.14) / 180;
    printf("Sin of angle %d is: %.3f", t, sin(radian));
    return 0;
}