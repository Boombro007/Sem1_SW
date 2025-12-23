#include<stdio.h>
void fibonacci(int x,int y,int i,int n,int fib)
{
    printf("Enter value of fib:");
    scanf("%d",&n);
}
int main()
{
    //fibonacci 
    void fibonacci(int x,int y,int i,int n,int fib);
    int x=0,y=1;
    int n,fib,i;
    for(i=0;i<=n;i++)
    {
        fib = x + y;
        printf("%d ",fib);
        x = y;
        y = fib;
    }
    return 0;
}