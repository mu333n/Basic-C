#include<stdio.h>
int main()
{
    char ch;

    printf("Enter a English Latter  = \n");
    top:
    scanf("%c",&ch);
    if(!isalpha(ch))
    {
        printf("Character error , i said English Letter\n");
        goto top;
    }

    switch(ch)
    {
    case'a':
        printf("The character is Vowel\n");
        break;
    case'A':
        printf("The character is Vowel\n");
        break;
    case'e':
        printf("The character is Vowel\n");
        break;
    case'E':
        printf("The character is Vowel]n");
        break;
    case'i':
        printf("The character is Vowel\n");
        break;
    case'I':
        printf("The character is Vowel\n");
        break;
    case'o':
        printf("The character is Vowel\n");
        break;
    case'O':
        printf("The character is Vowel\n");
        break;
    case'u':
        printf("The character is Vowel\n");
        break;
    case'U':
            printf("The character is Vowel\n");
            break;
    default:
        printf("The character is Consonante\n");
    }
    return 0;
    }
