#include<stdio.h>
int main()
{
    int n,i,sum;
    printf("Enter the number you want to print sum upto:");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        sum = sum + i;
    }
    printf("Sum = %d",sum);
    return 0;
}