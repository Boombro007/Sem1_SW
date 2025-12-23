#include <stdio.h>
int main()
{
    char ch;
    printf("Enter an alphabet:");
    scanf("%c",&ch);
    switch (ch)
    {
        case'a':
        case'e':
        case'i':
        case'o':
        case'u':
        case'A':
        case'E':
        case'I':
        case'O':
        case'U':
        printf("This is an vowel\n");
        break;
        default:
        printf("This is a consonant\n");
    }
    return 0;
}