#include<stdio.h>
#include <ctype.h>
int main()
{

//IE-1
float mark1;

printf("Type down your Exam Mark and Press Enter: ");
scanf("%f", &mark1);

if(mark1<35)
    {
        printf("You have failed your exam!\n\n\n");
    }
else
    {
        printf("You have passed your exam\n\n\n");
    }


//IE-2
float mark2;

printf("Type down your Exam Mark and Press Enter: ");
fflush(stdin);
scanf("%f", &mark2);


if(mark2>=35 && mark2<50)
    {
        printf("You got C Grade in your Exam\n\n\n");
    }
else if(mark2>=50 && mark2<70)
    {
        printf("You got B Grade in your Exam\n\n\n");
    }
else if(mark2>=70 && mark2<85)
    {
        printf("You got A Grade in your Exam\n\n\n");
    }
else if(mark2>=85 && mark2<=100)
    {
        printf("You got A+ Grade in your Exam\n\n\n");
    }
else if(mark2>100)
    {
        printf("Wrong Mark Entered\n\n\n");
    }
else
    {
        printf("You got F Grade in your Exam\n\n\n");
    }


//IE-3
int eo1;

printf("Type down an Integer Number and Press Enter: ");
fflush(stdin);
scanf("%d", &eo1);

if(eo1%2==0)
    {
        printf("The Entered Number is EVEN\n\n\n");
    }
else
    {
        printf("The Entered Number is ODD\n\n\n");
    }


//IE-4
int pn1;

printf("Type down an Integer Number and Press Enter: ");
fflush(stdin);
scanf("%d", &pn1);

if(pn1>=0)
    {
        printf("The Entered Number is POSITIVE\n\n\n");
    }
else
    {
        printf("The Entered Number is NEGATIVE\n\n\n");
    }


///IE-5
float mm1;
float mm2;

printf("Type down a Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm1);
printf("Type down another Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm1);

if(mm1>mm2)
    {
        printf("The Number %.2f is the Maximum\n\n\n", mm1);
    }
else
    {
        printf("The Number %.2f is the Maximum\n\n\n", mm2);
    }


//IE-6
float mm3;
float mm4;

printf("Type down a Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm3);
printf("Type down another Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm4);

if(mm3<mm4)
    {
        printf("The Number %.2f is the Minimum\n\n\n", mm3);
    }
else
    {
        printf("The Number %.2f is the Minimum\n\n\n", mm4);
    }


//IE-7
float mm5;
float mm6;
float mm7;

printf("Type down First Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm5);
printf("Type down Second Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm6);
printf("Type down Third Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm7);

if(mm5>mm6 && mm5>mm7)
    {
        printf("The First Number %.2f is the Maximum\n\n\n", mm5);
    }
else if(mm6>mm5 && mm6>mm7)
    {
        printf("The Second Number %.2f is the Maximum\n\n\n", mm6);
    }
else
    {
        printf("The Third Number %.2f is the Maximum\n\n\n", mm7); 
    }


//IE-8
float mm8;
float mm9;
float mm10;

printf("Type down First Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm8);
printf("Type down Second Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm9);
printf("Type down Third Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm10);

if(mm8<mm9 && mm8<mm10)
    {
        printf("The First Number %.2f is the Minimum\n\n\n", mm8);
    }
else if(mm9<mm8 && mm9<mm10)
    {
        printf("The Second Number %.2f is the Minimum\n\n\n", mm9);
    }
else
    {
        printf("The Third Number %.2f is the Minimum\n\n\n", mm10); 
    }


//IE-9
float mm11;
float mm12;
float mm13;

printf("Type down First Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm11);
printf("Type down Second Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm12);
printf("Type down Third Number and Press Enter: ");
fflush(stdin);
scanf("%f", &mm13);

if(mm11>mm12 && mm11<mm13)
    {
        printf("The First Number %.2f is the Medium\n\n\n", mm11);
    }
else if(mm12>mm11 && mm12<mm13)
    {
        printf("The Second Number %.2f is the Medium\n\n\n", mm12);
    }
else
    {
        printf("The Third Number %.2f is the Medium\n\n\n", mm13); 
    }


//IE-10 is a Math Problem


//IE-11
int year;

printf("Enter a Year: ");
fflush(stdin);
scanf("%d", &year);

if(year%4==0)
    {
        printf("%d is a Leap Year\n\n\n", year);
    }
else if(year%100!=0 && year%4==0)
    {
        printf("%d is a Leap Year\n\n\n", year);
    }
else
    {
        printf("%d is NOT a Leap Year\n\n\n", year);
    }


//IE-12
char ch1;

printf("Enter a Letter: ");
fflush(stdin);
scanf("%c", &ch1);

char tl1 = toupper(ch1);
int asc1 = tl1;

if(asc1==65 || asc1==69 || asc1==73 || asc1==79 || asc1==85)
    {
        printf("The Letter %c is a Vowel\n\n\n", tl1);
    }
else
    {
        printf("The Letter %c is a Consonant\n\n\n", tl1);
    }


//IE-13
char ch2;

printf("Enter a Letter: ");
fflush(stdin);
scanf("%c", &ch2);

int asc2 = ch2;

if(asc2>=65 && asc2<=90)
    {
        printf("The Letter %c is Uppercase", ch2);
    }
else
    {
        printf("The Letter %c is Lowercase", ch2);
    }



return 0;

}
