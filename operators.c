//Additin of two numbers
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("Enter the value of two numbers: ");
    scanf("%d%d",&a,&b);
    int add=a+b;
    printf("The addition of two numbers: ");
    printf("%d",add);
//Operators of two numbers
    float p,q,result;
    printf("Enter the value of two numbers: ");
    scanf("%f%f",&p,&q);
    result=p+q;
    printf("Addition of two numbers: %f\n",result);
    result=p-q;
    printf("Subtraction of two numbers: %f\n",result);
    result=p*q;
    printf("Multiplication of two numbers: %f\n",result);
    result=p/q;
    printf("Division of two numbers: %f\n",result);

//Area of a triangle
    float l,bas,area;
    printf("Enter the length and base of a triangle: ");
    scanf("%f%f",&l,&bas);
    area=.5*l*bas;
    printf("The area of a triangle: %f",area);

//Area of a triangle
    float i,j,k,area1,s;
    printf("Enter the value of 3 sides length of the triangle: ");
    scanf("%f%f%f",&i,&j,&k);
    s=(i+j+k)/2;
    area1=sqrt(s*(s-i)*(s-j)*(s-k));
    printf("The area of a triangle: %f",area1);
//Area of a rectangle
    float le,ba,area2;
    printf("Enter the length and base of a rectangle: ");
    scanf("%f%f",&le,&ba);
    area2=le*ba;
    printf("The area of a rectangle: %f",area2);

//Area of a circle
    float r,area3,pi;
    pi=3.1416;
    printf("Enter the radius of a circle: ");
    scanf("%f",&r);
    area3=pi*r;
    printf("The area of a circle: %f",area3);
//Calcius to fahrenheit
    float cel, fah;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &cel);

    fah = (cel * 9 / 5) + 32;
    printf("Celsius = %f Fahrenheit\n", cel, fah);

//Fahrenheit to calcius
    float fahrenheit, celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celsius: %f\n", celsius);
//swapping number

    int x,y,swap;
    scanf("%d%d",&x,&y);
    swap=x;
    x=y;
    y=swap;
    printf("%d %d",x,y);
}

