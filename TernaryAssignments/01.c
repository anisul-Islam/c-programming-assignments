// Write a program that read mark and display pass or fail.
#include <stdio.h>
int main()
{
    int Mark;
    printf("Enter Obtained Mark: ");
    scanf("%d", &Mark);
    (Mark >= 33 && Mark <= 100) ? printf("Passed") : printf("Failed");
    return 0;
}