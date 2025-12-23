#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter a limit for add of series:");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("Sum is %d",sum);
    return 0;
}