#include<stdio.h>
int main()
{
    char str1[] = "Deven";
    char str2[20];
    int i;
    for(i=0;str1[i] !='\0';i++)
    {
        str2[i] = str1[i];
    }
    str2[i] ='\0';
    str2[0] ='S';
    str2[4] ='n';
    printf("str 1 =%s\n",str1);
    printf("str 2 =%s\n",str2);
    return 0;
}