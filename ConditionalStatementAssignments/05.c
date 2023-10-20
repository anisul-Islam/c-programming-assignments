// Write a program that read mark and display result in grade.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);
    if (num < 0 || num > 100)
    {
        printf("Invalid Input!");
    }
    else if (num >= 80)
    {
        printf("Your Grade is: A+");
    }
    else if (num >= 70)
    {
        printf("Your Grade is: A");
    }
    else if (num >= 60)
    {
        printf("Your Grade is: A-");
    }
    else if (num >= 50)
    {
        printf("Your Grade is: B");
    }
    else if (num >= 40)
    {
        printf("Your Grade is: C");
    }
    else if (num >= 33)
    {
        printf("Your Grade is: D");
    }
    else
    {
        printf("Your Grade is: F for Fail!");
    }

    return 0;
}