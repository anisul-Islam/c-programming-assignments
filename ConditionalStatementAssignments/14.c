// Write a program that read any year and display leap or not.
#include <stdio.h>
int main()
{
    int Year;
    printf("Enter a Year: ");
    scanf("%d", &Year);
    if (Year % 400 == 0)
    {
        printf("%d is Leap Year.",Year);
    }
    else if (Year % 4 == 0 && Year % 100 != 0)
    {
        printf("%d is Leap Year.",Year);
    }
    else
    {
        printf("%d is Not a Leap Year.",Year);
    }

    return 0;
}