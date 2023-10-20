// Write a program that read mark and display result in grade.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number:\n");
    scanf("%d", &num);
    if (num < 0 || num > 100)
    {
        printf("Invalid Input!");
    }
    else if (num >= 80)
    {
        printf("A+");
    }
    else if (num >= 70)
    {
        printf("A");
    }
    else if (num >= 60)
    {
        printf("A-");
    }
    else if (num >= 50)
    {
        printf("B");
    }
    else if (num >= 40)
    {
        printf("C");
    }
    else if (num >= 33)
    {
        printf("D");
    }
    else
    {
        printf("F for Fail!");
    }

    return 0;
}