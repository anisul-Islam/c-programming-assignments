// Write a program to check a number positive or negative.
#include <stdio.h>
int main()
{
    int Number;
    printf("Enter a Number: ");
    scanf("%d", &Number);
    if (Number > 0)
    {
        printf("%d is Positive", Number);
    }
    else if (Number < 0)
    {
        printf("%d is Negative", Number);
    }
    else
    {
        printf("It's a Zero");
    }

    return 0;
}