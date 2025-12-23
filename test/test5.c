#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20] = "Krish Parekh";
    char s2[20];
    strcpy(s2,s1);
    s1[8] = 't';
    s1[10] = 'l';
    s1[11] = '\0';
    printf("s1 : %s\n",s1);
    printf("s2 : %s\n",s2);
    return 0;
}