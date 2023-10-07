// Write a program that convert lowercase letter to uppercase without using library function.
#include <stdio.h>
int main()
{
    char lower;
    printf("Enter a lower case: ");
    scanf("%c", &lower);
    printf("Upper case is: %c", lower - 32);
    return 0;
}