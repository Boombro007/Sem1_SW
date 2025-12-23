#include<stdio.h>

int main()
{
    int n,d,y,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    y=n;
    while(n>0)
    {
        d=n%10;
        sum = sum +d;
        n=n/10;
        printf("The sum of digits of %d is %d",y,sum);
    }
    return 0;
}