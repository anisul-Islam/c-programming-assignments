// Write a program that read mark and display pass or fail.
#include <stdio.h>
int main()
{
    int Mark;
    printf("Enter the Obtained Number: ");
    scanf("%d", &Mark);
    if (Mark >= 33 && Mark <= 100)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}