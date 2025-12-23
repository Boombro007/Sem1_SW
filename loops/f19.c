#include<stdio.h>
int main()
{
    int x=0,y=1,fib,i,n;
    printf("Enter a number for printing fibonacci series: ");
    scanf("%d",&n);
    printf("%d   %d   ",x,y);

    for(i=0;i<n;i++)
    {
        fib = x +y;
        printf("%d   ",fib);
        x=y;
        y=fib;
    }
    return 0;
}