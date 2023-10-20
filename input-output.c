//Write a program to print your name and deails
#include<stdio.h>
int main()
{
    printf("Name:Fahmida Tahsin\n");
    printf("Institute:Chittagong Independent University\n");
    printf("Semester:4th\n");
    return 0;
}
//Write a program that will display the size of different data types
#include<stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char ch;

    printf("Size of int= %d\n",sizeof(a));
    printf("Size of float= %d\n",sizeof(b));
    printf("Size of double= %d\n",sizeof(c));
    printf("Size of char= %d\n",sizeof(ch));
    return 0;
}
//To find a character of ASCII value
#include<stdio.h>
int main()
{
    int x;
    printf("Enter any ASCII value :");
    scanf("%d",&x);
    printf("The ASCII character is: %c",x);
    return 0;
}
//To find ASCII value of a character
#include<stdio.h>
int main()
{
    char n;
    printf("Enter any character :");
    scanf("%c",&n);

    printf("The ASCII value is: %d\n",n);
    return 0;
}
//Lowercase letter to uppercase letter using library function
#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any lowercase letter:");
    scanf("%c",&lower);

    upper = toupper(lower);
    printf("The uppercase letter is %c",upper);
    return 0;
}
//Uppercase letter to lowercase letter using library function
#include<stdio.h>
int main()
{
    char upper,lower;
    printf("Enter any uppercase letter:");

    scanf("%c",&upper);
    lower = tolower(upper);
    printf("The lowercase letter is: %c",lower);
    return 0;
}
//Without using library function lowercase letter to uppercase letter
#include<stdio.h>
int main()
{
    char lower;
    printf("Enter lowercase letter :");
    scanf("%c",&lower);
    printf("The uppercase letter: %c",lower-32);
    return 0;
}
//Without using library function uppercase letter to lowercase letter
#include<stdio.h>
int main()
{
    char upper;
    printf("Enter any uppercase letter:");

    scanf("%c",&upper);
    printf("The lowercase letter is: %c",upper+32);
    return 0;
}
//Write a program that convert decimal to octal
#include<stdio.h>
int main()
{
    int num;
    printf("Decimal number= ");
    scanf("%d",&num);
    printf("Octal number is = %o",num);
    getch();
}
//Write a program that convert octal to decimal
#include<stdio.h>
int main()
{
    int num;
    printf("Octal number =");
    scanf("%o",&num);
    printf("Decimal number is = %d",num);
    getch();
}
//Write a program that convert decimal to hexadecimal
#include<stdio.h>
int main()
{
    int num;
    printf("Decimal number = ");
    scanf("%d",&num);
    printf("Hexadecimal number is = %x",num);
    getch();
}
//Write a program that convert Hexadecimal to Decimal
#include<stdio.h>
int main()
{
    int num;
    printf("Hexadecimal number = ");
    scanf("%x",&num);
    printf("Decimal number is = %d",num);
    getch();
}
//Write a program that convert octal to hexadecimal
#include<stdio.h>
int main()
{
    int num;
    printf("Octal number =");
    scanf("%o",&num);
    printf("Hexadecimal number is = %x",num);
    getch();
}
//Write a program that convert octal to hexadecimal
#include<stdio.h>
int main()
{
    int num;
    printf("Octal number =");
    scanf("%o",&num);
    printf("Hexadecimal number is = %x",num);
    getch();
}


