#include<stdio.h>
int main() {
    printf("1.Write a program that read mark and display pass or fail.\n");
    int digit;

    printf("Enter a digit (0-9): ");
    scanf("%d", &digit);

    switch(digit) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            printf("Invalid digit\n");
    }
    printf("2.Write a program that read mark and display result in grade.\n");
    int mark;
    printf("Enter the mark: ");
    scanf("%d", &mark);

   switch(mark/10) {
        case 10:
        case 9:
            printf("Grade: A+\n");
            break;
        case 8:
            printf("Grade: A\n");
            break;
        case 7:
            printf("Grade: A\n");
            break;
        case 6:
            printf("Grade: B+\n");
            break;
        case 5:
            printf("Grade: C+\n");
            break;
        default:
            printf("Grade: F\n");
            break;
    }
    printf("3.Write a program to check a number even or odd.\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num % 2) {
        case 0:
            printf("%d is even.", num);
            break;
        case 1:
            printf("%d is odd.", num);
            break;
    }

    return 0;
}
