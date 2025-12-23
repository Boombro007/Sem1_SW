#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    char sub[20];
    int i,m;
    printf("Enter string : ");
    fgets(str,sizeof str,stdin);
    printf("Enter substring : ");
    fgets(sub,sizeof sub,stdin);

    for(i=0;str[i]!='\0';i++)
    {
        if(sub[0]==str[i] && sub[1] == str[i+1])
        {
            printf("Index = %d",i);
            break;
        }
    }
    return 0;
}