// Write a program that add 2 integers/floating point number.
#include <stdio.h>
int main()
{
    float A, B;
    printf("Enter Two Floating Point Value: ");
    scanf("%f %f", &A, &B);
    printf("Addition is: %.3f", A + B);
    return 0;
}

/*

#include <stdio.h>
int main()
{
    int A, B;
    printf("Enter Two Integer Value: ");
    scanf("%d %d", &A, &B);
    printf("Addition is: %df", A + B);
    return 0;
}


*/