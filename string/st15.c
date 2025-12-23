#include<stdio.h>
#include<string.h>
int main()
{
    char str1[21];
    int i,start=0,end=0,temp;
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
            temp=str1[start];
            str1[start]=str1[end];
            str1[end]=temp;
        }
    printf("%s",str1);
    return 0;
}