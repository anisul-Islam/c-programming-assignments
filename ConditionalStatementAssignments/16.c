// Write a program that read any letter and display its uppercase or lowercase.
#include <stdio.h>
#include <ctype.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("After Conversion: %c", toupper(ch));
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("After Conversion: %c", tolower(ch));
    }

    return 0;
}