#include<stdio.h>
void fibonacci()
{
    int x=0,y=1,i,n,fib;
    printf("Enter The fibonacci series:");
    scanf("%d",&n);
    printf("%d   %d  ",x,y);
    for(i=0;i<n;i++)
    {
        fib = x + y;
        printf("%d  ",fib);
        x = y;
        y = fib;
    }
}
int main()
{
    // fibonaci series
    fibonacci();
    return 0;
}