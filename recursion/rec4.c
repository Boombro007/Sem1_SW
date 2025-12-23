#include<stdio.h>
int gcd(int a,int b)
{
    if(b == 0)
        return 0;
    else
        return gcd(b,a%b);
}
int main()
{
    int x,y,result;
    printf("ENter two numbers:");
    scanf("%d%d",&x,&y);
    result = gcd(x,y);
    printf("GCD of %d and %d is %d",x,y,result);
    return 0;
}