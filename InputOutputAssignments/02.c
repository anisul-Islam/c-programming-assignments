// Write a program that will display the size of int, float, double, char data type.
#include <stdio.h>
int main()
{
    printf("Size of Integer: %d bytes\n", sizeof(int));
    printf("Size of Float: %d bytes\n", sizeof(float));
    printf("Size of Double: %d bytes\n", sizeof(double));
    printf("Size of Character: %d bytes\n", sizeof(char));
    return 0;
}