//1.Write a programe to print my name and details:
#include<stdio.h>
#include <ctype.h>
int main()
{
    printf("My name is Susmita Paul\nI study in Bangladesh Army International University of Science and Technology, in department of CSE ");

//2.Write a programe to print the size of data types
    printf("Size of int: %lu bytes\n", sizeof(int));
    printf("Size of float: %lu bytes\n", sizeof(float));
    printf("Size of double: %lu bytes\n", sizeof(double));
    printf("Size of char: %lu bytes\n", sizeof(char));

//3.Write the programe which print the ASCII value of a letter
    char letter;

    printf("Enter a letter: ");
    scanf("%c", &letter);

    printf("The ASCII value of %c is %d\n", letter, letter);

//4.Write a programe which print the charecter of an ASCII value
    int value;

    printf("Enter the ASCII value: ");
    scanf("%d", &value);

    printf("Character: %c\n", value);


//5.Write a programe to print uppercase of a lowercase letter 
    char lowercase;
    char uppercase;

    printf("Enter a lowercase character: ");
    scanf("%c", &lowercase);

    uppercase = toupper(lowercase);

    printf("Uppercase: %c\n", uppercase);

    return 0;

//6.Write a programe to print lowercase of a uppercase letter 



    char low;
    char up;

    printf("Enter a Uuppercase character: ");
    scanf("%c", &up);

    low = tolower(up);

    printf("Uppercase: %c\n",low);

//7.Write a programe to print uppercase of a lowercase letter (without using function)
    char lower,upper;
    printf("Enter the lowercase letter: ");
    scanf("%c",&lower);
    upper=lower+32;
    printf("The uppercase letter is: ");
    printf("%c\n",upper);

//8.Write a programe to print lowercase of a uppercase letter (without using function)
    char lowerc,upperc;
    printf("Enter the uppercase letter: ");
    scanf("%c",&upperc);
    lowerc=upperc+32;
    printf("The lowercase letter is: ");
    printf("%c\n",lowerc);

//9.Write a programe that convert decimal to octal
    int a;
    printf("Enter the decimal number: ");
    scanf("%i",&a);
    printf("The octal number is: ");
    printf("%o\n",a);

//10.Write a programe that convert octal to decimal

    int x;
    printf("Enter the octal number: ");
    scanf("%o",&x);
    printf("The decimal number is: ");
    printf("%i\n",x);
//11.Write a programe that convert decimal to hexa-decimal
    int y;
    printf("Enter the decimal number: ");
    scanf("%i",&y);
    printf("The hexa-decimal number is: ");
    printf("%x\n",y);
//12.Write a programe that convert hexa-decimal to decimal
    int z;
    printf("Enter the hexa-decimal number: ");
    scanf("%x",&z);
    printf("The decimal number is: ");
    printf("%i\n",z);

//13.Write a programe that convert octal to hexa-decimal
    int i;
    printf("Enter the octal number: ");
    scanf("%o",&i);
    printf("The hexa-decimal number is: ");
    printf("%x\n",i);

//14.Write a programe that convert hexa-decimal to octal
    int j;
    printf("Enter the hexa-decimal number: ");
    scanf("%x",&j);
    printf("The octal number is: ");
    printf("%o\n",j);
}
        













