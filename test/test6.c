#include<stdio.h>
#include<string.h>
int main()
{
    char s1[] = "Maa ka Bh*sda";
    char s2[20];
    strcpy(s2,s1);
    s2[0] = 'A';
    s2[1] = 'a';
    s2[3] = 'a';
    s2[4] = 'g';
    s2[5] = '\0';
    printf("%s %s\n",s1,s2);
    return 0;
}