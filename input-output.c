#include<stdio.h>
int main()
{

//IO-1
printf("Hello, My Name is Mahim\n");    
printf("I am 23 years old\n");
printf("I read in Manarat International University\n");
printf("The name of the Department I study under is Computer Science and Engineering\n\n\n");


//IO-2
int a;
float b;
double c;
char d;

printf("The Size of int variable is: %d\n", sizeof(a));
printf("The Size of float variable is: %d\n", sizeof(b));
printf("The Size of double variable is: %d\n", sizeof(c));
printf("The Size of char variable is: %d\n\n\n", sizeof(d));


//IO-3
int i;

printf("Enter Any ASCII value and Press Enter: ");
scanf("%d", &i);
printf("The Character in ASCII value is: %c\n\n\n", i);


//IO-4
char c1;

printf("Enter Any Character and Press Enter: ");
fflush(stdin);
scanf("%c", &c1);
printf("The Character in ASCII value is: %d\n\n\n", c1);


//IO-5
char l1;

printf("Enter A Lowercase Character and Press Enter: ");
fflush(stdin);
scanf("%c", &l1);
printf("The Character in Uppercase is: %c\n\n\n", toupper(l1));

//IO-6
char u1;

printf("Enter A Uppercase Character and Press Enter: ");
fflush(stdin);
scanf("%c", &u1);
printf("The Character in Lowercase is: %c\n\n\n", tolower(u1));


//IO-7
char l2;

printf("Enter A Lowercase Character and Press Enter: ");
fflush(stdin);
scanf("%c", &l2);
int asc1 = l2 - 32;
printf("The Character in Uppercase is: %c\n\n\n", asc1);


//IO-8
char u2;

printf("Enter A Uppercase Character and Press Enter: ");
fflush(stdin);
scanf("%c", &u2);
int asc2 = u2 + 32;
printf("The Character in Lowercase is: %c\n\n\n", asc2);


//IO-9
int d1;

printf("Enter A Decimal Integer Number and Press Enter: ");
fflush(stdin);
scanf("%d", &d1);
printf("The Entered Decimal Number in Octal is: %o\n\n\n", d1);


//IO-10
int o1;

printf("Enter An Octal Number and Press Enter: ");
fflush(stdin);
scanf("%o", &o1);
printf("The Entered Octal Number in Decimal is: %d\n\n\n", o1);


//IO-11
int d2;

printf("Enter A Decimal Integer Number and Press Enter: ");
fflush(stdin);
scanf("%d", &d2);
printf("The Entered Decimal Number in Hexa-Decimal is: %x\n\n\n", d2);


//IO-12
int x1;

printf("Enter A Hexa-Decimal Number and Press Enter: ");
fflush(stdin);
scanf("%x", &x1);
printf("The Entered Hexa-Decimal Number in Decimal is: %d\n\n\n", x1);


//IO-13
int o2;

printf("Enter An Octal Number and Press Enter: ");
fflush(stdin);
scanf("%o", &o2);
printf("The Entered Octal Number in Hexa-Decimal is: %x\n\n\n", o2);


//IO-9
int x2;

printf("Enter A Hexa-Decimal Number and Press Enter: ");
fflush(stdin);
scanf("%x", &x2);
printf("The Entered Hexa-Decimal Number in Octal is: %o\n\n\n", x2);



return 0;

}
