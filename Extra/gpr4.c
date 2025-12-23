#include<stdio.h>
int main()
{
    int x=0,y=1,fib,n;
    printf("Enter the number how much number you want to print fibonacci series:");
    scanf("%d",&n);
    printf("%d   %d   ",x,y);
    for(int i=0;i<=n;i++)
    {
        fib = x + y;
        printf("%d",fib);
        x = y;
        y = fib;
    }
    return 0; 
}