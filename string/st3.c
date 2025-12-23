#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="Good ";
    char str2[]="Morning";
    strcat(str1,str2);
    //printf("%s",str1);
    printf("%s",str1);
    /* When we use str1 in printf it prints "Good Morining" and when we use str2 the we get "Morning"*/
    return 0;
}