#include<stdio.h>
void fact()
{
    int n,i,fact=1;
    printf("Entera number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
}
int main()
{
    //fact call
    fact();
    return 0;
}