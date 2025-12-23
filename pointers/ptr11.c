//program-2
#include<stdio.h>
#include<string.h>
void mystrcat(char *s,char *t)
{
    strcat(s,t);    
}
int main()
{
    char str1[50];
    char str2[50];
    printf("Enter string-1:");
    scanf("%[^\n]",str1);
    getchar();
    printf("Enter string-2:");
    scanf("%[^\n]",str2);
    printf("String-1 : %s,String-2 : %s\n",str1,str2);
    mystrcat(str1,str2);
    printf("String : %s",str1); 
    return 0;
}