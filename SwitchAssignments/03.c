// Write a program that read any letter and display vowel or consonant.
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is a Vowel!!", ch);
        break;
    default:
        printf("%c is a Consonant!!", ch);
        break;
    }
    return 0;
}