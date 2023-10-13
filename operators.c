#include<stdio.h>
int main()
{

//OP-1
int i1, i2;
float f1, f2;

printf("Enter An Integer Number and Press Enter: ");
scanf("%d", &i1);
printf("Enter Another Integer Number and Press Enter: ");
fflush(stdin);
scanf("%d", &i2);
printf("%d + %d = %d\n\n", i1, i2, i1+i2);

printf("Enter An Float Number and Press Enter: ");
scanf("%f", &f1);
printf("Enter Another Float Number and Press Enter: ");
fflush(stdin);
scanf("%f", &f2);
printf("%f + %f = %f\n\n\n", f1, f2, f1+f2);


//OP-9
int swap1, swap2;
int temp;

printf("Enter an Integer to keep in SWAP1: ");
fflush(stdin);
scanf("%d", &swap1);
printf("Enter an Integer to keep in SWAP2: ");
fflush(stdin);
scanf("%d", &swap2);

printf("BEFORE SWAPPING:\nSWAP1 = %d\nSWAP2 = %d\n", swap1, swap2);

temp = swap1;
swap1 = swap2;
swap2 = temp;

printf("BEFORE SWAPPING:\nSWAP1 = %d\nSWAP2 = %d\n", swap1, swap2);


return 0;

}
