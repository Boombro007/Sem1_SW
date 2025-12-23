#include<stdio.h>
void fact(int n)
{
    int i,fact =1;
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d.\n",n,fact);
}
int main()
{
    //fuction call
    fact(8);
    return 0;
}