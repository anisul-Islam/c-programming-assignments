#include <stdio.h>
#include <math.h>

int main() {
    printf("1.Find the absolute value of an number\n");
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int absValue = abs(num);

    printf("The absolute value of %d is %d\n", num, absValue);

    printf("2.Find the square root of an number\n");
    float number, squareRoot;
    printf("Enter a number: ");
    scanf("%f", &number);
    squareRoot = sqrt(number);
    printf("Square root of %.2f = %.2f\n", number, squareRoot);

    printf("3.Find the log value of a number\n");
    float x;
    printf("Enter a number: ");
    scanf("%f", &x);
    float result = log(x);
    printf("log(%f) = %f\n",x,result);

    printf("4.Find the log10 value of a number\n");
    float a;
    printf("Enter a number: ");
    scanf("%f", &a);
    result= log10(a);
    printf("log10(%f) = %f\n",a,result);

    printf("5.Find the square root of a number\n");
    float b;
    printf("Enter a number: ");
    scanf("%f", &b);
    squareRoot = sqrt(b);
    printf("The square root of %.2f is %.lf\n",b, squareRoot);

    printf("6.Write a program that read any number x and display e to the power x\n");
    float c;
    printf("Enter a number: ");
    scanf("%f",&c);
    result = exp(c);
    printf("e^%.2f = %.2f\n",c, result);

    printf("7.Write a program that read two numbers (Y,Z) and display the value of YZ\n.");
    float z,y;
    printf("Enter the value of y: ");
    scanf("%f", &y);
    printf("Enter the value of z: ");
    scanf("%f", &z);
    result = pow(y,z);
    printf("The value of yz is: %.2f\n", result);

    printf("8.Write a program that read any angle t and display sin (t).\n");
    float t, sine;
    printf("Enter the angle in degrees: ");
    scanf("%f",&t);
    float radians = t * M_PI / 180.0;
    sine = sin(radians);
    printf("sin(%f) = %f\n",t, sine);
    printf("9.Write a program that read any angle t and display cos (t).\n");
    t = t * M_PI / 180;
    result = cos(t);
    printf("cos(%f) = %f\n",t, result);

    printf("10.Write a program that read any angle t and display sec (t).\n");
    radians = t * M_PI / 180.0;
    float sec = 1.0 / cos(radians);
    printf("sec(%f) = %f\n", t, sec);

    printf("11.Write a program that read any angle t and display tan (t).\n");
    radians = t * M_PI / 180.0;
    float tangent = tan(radians);
    printf("The tangent of %.2f degrees is %.2f\n", t, tangent);

    printf("12.Write a program that read any angle t and display cosec (t).\n");
    radians = t * M_PI / 180.0;
    float cosec = 1 / sin(radians);
    printf("Cosecant of %.2f degrees is %.2f\n", t, cosec);

    printf("13.Write a program that read any angle t and display cot (t).\n");
    radians = t * M_PI / 180.0;
    float cot = 1.0 / tan(radians);
    printf("cot(%f) = %f\n", t, cot);

    return 0;
}

