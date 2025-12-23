#include<stdio.h>
int main()
{
    char str1[] = "ABC";
    char str2[10];
    int i;
    for(i=0;str1[i] != '\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    str2[1] = 'X';
    printf("%s %s\n",str1,str2);
    return 0;
}