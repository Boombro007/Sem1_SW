#include<stdio.h>
int main()
{
    int i,n,fact=1;
    printf("Enter the number of factorial you want:");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
    return 0;
}