// Write a program that read any angle t and display cot (t)
#include <stdio.h>
#include <math.h>
int main()
{
    int t;
    printf("Enter the Angle(Degree): ");
    scanf("%d", &t);
    float radian = (t * 3.14) / 180;
    printf("Cotantgent of angle %d is: %.2f", t, (1.0/tan(radian)));
    return 0;
}