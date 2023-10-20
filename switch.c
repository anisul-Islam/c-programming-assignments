#include<stdio.h>
#include <ctype.h>
int main()
{

//SW-1
int dg;

printf("Enter a Single Digit: ");
scanf("%d", &dg);

switch(dg)
    {
    case 1:
        printf("The entered digit is spelled ONE");
        break;
    case 2:
        printf("The entered digit is spelled TWO");
        break;
    case 3:
        printf("The entered digit is spelled THREE");
        break;
    case 4:
        printf("The entered digit is spelled FOUR");
        break;
    case 5:
        printf("The entered digit is spelled FIVE");
        break;
    case 6:
        printf("The entered digit is spelled SIX");
        break;
    case 7:
        printf("The entered digit is spelled SEVEN");
        break;
    case 8:
        printf("The entered digit is spelled EIGHT");
        break;
    case 9:
        printf("The entered digit is spelled NINE");
        break;
    case 0:
        printf("The entered digit is spelled ZERO");
        break;
    default:
        printf("Error!");
        break;
    }
printf("\n\n\n");


//SW-2


//SW-3
char ch1;

printf("Enter a letter: ");
scanf("%c", &ch1);

ch1 = toupper(ch1);
int asc1 = ch1;

switch(ch1)
    {
    case 65:
        printf("The Letter %c is a Vowel", ch1);
        break;
    case 69:
        printf("The Letter %c is a Vowel", ch1);
        break;
    case 73:
        printf("The Letter %c is a Vowel", ch1);
        break;
    case 79:
        printf("The Letter %c is a Vowel", ch1);
        break;
    case 85:
        printf("The Letter %c is a Vowel", ch1);
        break;
    default:
        printf("The Letter %c is a Consonant", ch1);
        break;
    }
printf("\n\n\n");


//SW-4
int dg2;

printf("Enter a Number from 1 to 10: ");
scanf("%d", &dg2);

switch(dg2)
    {
    case 1:
        printf("The entered Number in Roman Numerals is I");
        break;
    case 2:
        printf("The entered Number in Roman Numerals is II");
        break;
    case 3:
        printf("The entered Number in Roman Numerals is III");
        break;
    case 4:
        printf("The entered Number in Roman Numerals is IV");
        break;
    case 5:
        printf("The entered Number in Roman Numerals is V");
        break;
    case 6:
        printf("The entered Number in Roman Numerals is VI");
        break;
    case 7:
        printf("The entered Number in Roman Numerals is VII");
        break;
    case 8:
        printf("The entered Number in Roman Numerals is VIII");
        break;
    case 9:
        printf("The entered Number in Roman Numerals is IX");
        break;
    case 10:
        printf("The entered Number in Roman Numerals is X");
        break;
    default:
        printf("Error!");
        break;
    }
printf("\n\n\n");



return 0;

}
