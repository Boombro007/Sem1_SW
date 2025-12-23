#include<stdio.h>
#include<string.h>
int main()
{
    char str1[30];
    printf("Enter a string:");
    fgets(str1,30,stdin);
    printf("Size = %d",strlen(str1));
    return 0;
}