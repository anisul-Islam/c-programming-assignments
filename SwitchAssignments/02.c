// Write a program that read a year and display leap year or not.
#include <stdio.h>
int main()
{
    int Year;
    printf("Enter a Year: ");
    scanf("%d", &Year);
    int Y = (Year % 400 == 0) || (Year % 4 == 0 && Year % 100 != 0);
    switch (Y)
    {
    case 1:
        printf("It's Leap Year");
        break;
    default:
        printf("It's Not a Leap Year");
        break;
    }
    return 0;
}