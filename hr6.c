#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000];
    int count[100] = {0};
    scanf("%s", s);
    getchar();
    if(strlen(s) >= 1 && strlen(s) <= 1000)
    {
        for(int i=0;s[i]!='\0';i++)
        {
            if(s[i] >= '0' && s[i] <= '9')
            {
                int d = s[i] - '0';
                count[d]++;
            }
        }
        for(int i=0;i<10;i++)
        {
            printf("%d ",count[i]);
        }
    }
    return 0;
}