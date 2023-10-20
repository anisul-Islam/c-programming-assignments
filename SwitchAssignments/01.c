// Write a program that read a digit and display by its spelling
#include <stdio.h>
int main()
{
    int Digit;
    printf("Enter a Digit: ");
    scanf("%d", &Digit);
    switch (Digit)
    {
    case 0:
        printf("Spelling: Zero");
        break;
    case 1:
        printf("Spelling: One");
        break;
    case 2:
        printf("Spelling: Two");
        break;
    case 3:
        printf("Spelling: Three");
        break;
    case 4:
        printf("Spelling: Four");
        break;
    case 5:
        printf("Spelling: Five");
        break;
    case 6:
        printf("Spelling: Six");
        break;
    case 7:
        printf("Spelling: Seven");
        break;
    case 8:
        printf("Spelling: Eight");
        break;
    default:
        printf("Spelling: Nine");
        break;
    }
    return 0;
}