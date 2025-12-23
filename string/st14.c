#include<stdio.h>
#include<string.h>
int main()
{
    char str1[21];
    int i,a=1,start=0,end=0;
    printf("Enter First string : ");
    fgets(str1,sizeof str1,stdin);
    for(i=0;str1[i]!='\0';i++)
        {
            if(str1[i]=='\n')
            {
                str1[i]='\0';
                break;
            }
        }
    for(i=0;str1[i]!='\0';i++)
    {
        end++;
    }
    end--;
    for(;start<end;start++,end--)
        {
            if(str1[start]!=str1[end])
            {
                a=0;
                break;
            }
        }
        if(a)
            printf("String is palidrome\n");
        else
            printf("Strings is not palidrome\n");
    return 0;
}