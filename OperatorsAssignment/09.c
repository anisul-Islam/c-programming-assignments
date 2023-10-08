// Write a C program that swaps 2 numbers.
#include <stdio.h>
int main()
{
    int Num_1, Num_2, Temp;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &Num_1, &Num_2);
    printf("Numbers Before Swapping: %d %d\n", Num_1, Num_2);
    Temp = Num_1;
    Num_1 = Num_2;
    Num_2 = Temp;
    printf("Numbers After Swapping: %d %d", Num_1, Num_2);
    return 0;
}