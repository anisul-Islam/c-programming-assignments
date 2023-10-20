#include<stdio.h>
#include<math.h>
int main() {
    int mark;
    printf("1.Write a program that read mark and display pass or fail.\n");
    printf("Enter the marks: ");
    scanf("%d", &mark);
    if (mark >=50) {
        printf("Pass\n");
    } else {
        printf("Fail\n");
    }
    printf("2.Write a program that read mark and display result in grade.\n");
     if (mark >= 90) {
        printf("Grade: A+\n");
    } else if (mark >= 80) {
        printf("Grade: A\n");
    } else if (mark >= 70) {
        printf("Grade: A-\n");
    } else if (mark >= 60) {
        printf("Grade: B+\n");
    }
    else if (mark >= 50) {
        printf("Grade: C+\n");
    }
     else {
        printf("Grade: F\n");
    }
    printf("3.Write a program to check a number even or odd.\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0) {
        printf("%d is even.", num);
    } else {
        printf("%d is odd.", num);
    }
    printf("\n7.Write a program to check a number positive or negative.\n");
     if (num > 0) {
        printf("%d is positive.\n", num);
    } else if (num < 0) {
        printf("%d is negative.\n", num);
    } else {
        printf("The number is zero.\n");
    }
    printf("8.Write a program that read two numbers and display maximum.\n");
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Maximum number is: %d\n", num1);
    } else {
        printf("Maximum number is: %d\n", num2);
    }
    printf("9.Write a program that read two numbers and display minimum.\n");
     if (num1 < num2) {
        printf("Minimum number is: %d\n", num1);
    } else {
        printf("Minimum number is: %d\n", num2);
    }
    printf("10.Write a program that read three numbers and display maximum.\n");
    int num3, max;

    printf("Enter three numbers: ");
    scanf("%d",&num3);

    max = num1;

    if (num2 > max) {
        max = num2;
    }

    if (num3 > max) {
        max = num3;
    }
    printf("The maximum number is: %d\n", max);
    printf("11.Write a program that read three numbers and display minimum.\n");
    int min = num1;

    if (num2 < min) {
        min = num2;
    }
    if (num3 < min) {
        min = num3;
    }
    printf("Minimum number is: %d\n", min);
    printf("12.Write a program that read three numbers and display medium.\n");
     if ((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3)) {
        printf("Medium: %d\n", num1);
    } else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3)) {
        printf("Medium: %d\n", num2);
    } else {
        printf("Medium: %d\n", num3);
    }
    printf("13. Write a program that read three numbers (a, b, c) and determine the roots of the quadratic equation.\n");
    float a, b, c;
    float discriminant, root1, root2;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots are real and different.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    } else if (discriminant == 0) {
        root1 = -b / (2 * a);
        printf("Roots are real and same.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        printf("Roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", realPart, imaginaryPart);
        printf("Root 2 = %.2f - %.2fi\n", realPart, imaginaryPart);
    }
    printf("14. Write a program that read any year and display leap or not.\n");
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }
    printf("15. Write a program that read any letter and display vowel or consonant.\n");
    char letter;
    printf("Enter a letter: ");
    scanf("%c", &letter);
    letter = tolower(letter);

    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
        printf("%c is a vowel.\n", letter);
    } else {
        printf("%c is a consonant.\n", letter);
    }
    printf("16.Write a program that read any letter and display its uppercase or lowercase.\n");

    if (letter >= 'A' && letter <= 'Z') {
        printf("Uppercase: %c\n", letter);
        printf("Lowercase: %c\n", letter + 32);
    } else if (letter >= 'a' && letter <= 'z') {
        printf("Uppercase: %c\n", letter - 32);
        printf("Lowercase: %c\n", letter);
    } else {
        printf("Invalid input!\n");
    }
    return 0;
}
