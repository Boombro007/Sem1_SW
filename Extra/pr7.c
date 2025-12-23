#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a time for stopwatch (in sec.):");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("Time:%d\n",i);
    }
    return 0;
}