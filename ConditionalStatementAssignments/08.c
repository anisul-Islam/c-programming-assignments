// Write a program that read two numbers and display maximum
#include <stdio.h>
int main()
{
    int N1, N2;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &N1, &N2);
    if (N1 >= N2)
    {
        printf("%d is the Max", N1);
    }
    else
    {
        printf("%d is the Max", N2);
    }

    return 0;
}