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


//OP-2
int num1;
int num2;

printf("Enter an Integer to keep in NUM1: ");
fflush(stdin);
scanf("%d", &num1);
printf("Enter an Integer to keep in NUM2: ");
fflush(stdin);
scanf("%d", &num2);

printf("\nNUM1 = %d\nNUM2 = %d\n\n", num1, num2);

printf("%d + %d = %d\n", num1, num2, num1+num2);
printf("%d - %d = %d\n", num1, num2, num1-num2);
printf("%d x %d = %d\n", num1, num2, num1*num2);
printf("%d / %d = %d, Remainder = %d\n\n\n", num1, num2, num1/num2, num1%num2);


//OP-3
float base;
float height;

printf("Enter the Base of the Triangle: ");
fflush(stdin);
scanf("%f", &base);
printf("Enter the Height of the Triangle: ");
fflush(stdin);
scanf("%f", &height);

float area1 = 0.5*(base*height);
printf("The Area of the Triangle = 1/2 x (Base x Height) = 1/2 x (%.2f x %.2f) = %.2f\n\n\n", base, height, area1);


//OP-4



//OP-5
float len1;
float bred1;

printf("Enter the Length of the Rectangle: ");
fflush(stdin);
scanf("%f", &len1);
printf("Enter the Breadth of the Rectangle: ");
fflush(stdin);
scanf("%f", &bred1);

float area3 = len1*bred1;
printf("The Area of the Rectangle = Length x Breadth = %.2f x %.2f = %.2f\n\n\n", len1, bred1, area3);


//OP-6
float rad;

printf("Enter the Radius of the Circle: ");
fflush(stdin);
scanf("%f", &rad);

float area4 = 3.14159*rad*rad;
printf("The Area of the Circle = Pi x (Radius)^2 = 3.14159 x %.2f^2 = %.2f\n\n\n", rad, area4);


//OP-7
float cel1;

printf("Enter the Temperature in Celcius: ");
fflush(stdin);
scanf("%f", &cel1);

float fahr1 = (cel1*9/5)+32;

printf("The Entered Temperature in Celcius = (Celcius × 9/5) + 32 = (%.2f × 9/5) + 32 = %.2f\n\n\n", cel1, fahr1);


//OP-8
float fahr2;

printf("Enter the Temperature in Fahrenheit: ");
fflush(stdin);
scanf("%f", &fahr2);

float cel2 = (fahr2-32)*5/9;

printf("The Entered Temperature in Celcius = (Fahrenheit − 32) × 5/9 = (%.2f − 32) × 5/9 = %.2f\n\n\n", fahr2, cel2);


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
