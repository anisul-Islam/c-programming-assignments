#include <stdio.h>

int main() {
    printf("1.Write a program that read mark and display pass or fail.\n");
    int mark;

    printf("Enter the mark: ");
    scanf("%d", &mark);
    printf("Result: %s\n", (mark >= 50) ? "Pass" : "Fail");
    printf("2.Write a program to check a number even or odd.\n");
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("%d is even.\n", num) : printf("%d is odd.\n", num);
    printf("3.Write a program that read two numbers and display maximum.\n");
    int num1, num2, max;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    max = (num1 > num2) ? num1 : num2;
    printf("The maximum number is: %d\n", max);
    printf("4.Write a program that read two numbers and display minimum.\n");
    int min = (num1 < num2) ? num1 : num2;
    printf("The maximum number is: %d\n", min);
    printf("5.Write a program that read three numbers and display maximum.\n");
    int  num3;

    printf("Enter three numbers: ");
    scanf("%d", &num3);

    max = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);

    printf("The maximum number is: %d\n", max);
    printf("6.Write a program that read three numbers and display minimum.\n");
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);
    printf("Minimum number is: %d\n", min);
    printf("7.Write a program that read three numbers and display medium.\n");
    int medium = (num1 > num2 && num1 < num3) || (num1 < num2 && num1 > num3) ? num1 :
             (num2 > num1 && num2 < num3) || (num2 < num1 && num2 > num3) ? num2 : num3;

    printf("The medium number is: %d\n", medium);

    return 0;
}
