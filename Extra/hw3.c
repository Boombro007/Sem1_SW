#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if(ch >= 'A' && ch <='Z')
    {
        printf("Upper case letters..\n");
    }
    else if(ch >= 'a' && ch<= 'z') 
    {
        printf("Lower case letters..\n");
    }
    else
    {
        printf("Invalid Letters..\n");
    }
    return 0;
}