#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20], str2[20];
    int i,a=0;
    printf("Enter First string : ");
    fgets(str1,sizeof str1,stdin);
    printf("Enter Second string : ");
    fgets(str2,sizeof str2,stdin);
    for(i=0;(str1[i]!='\0') && (str2[i]!='0');i++)
    {
        if(str1[i]==str2[i])
        {
            a=0;
        }
        else
        {
            a=1;
            break;
        }
    }
    if(a == 1)
        printf("Strings are different.\n");
    else
        printf("Strings are same.\n");
    return 0;
}