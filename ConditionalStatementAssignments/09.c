// Write a program that read two numbers and display minimum.
#include <stdio.h>
int main()
{
    int N1, N2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &N1, &N2);
    if (N1 >= N2)
    {
        printf("%d is the Minimum", N2);
    }
    else
    {
        printf("%d is the Minimum", N1);
    }
    return 0;
}