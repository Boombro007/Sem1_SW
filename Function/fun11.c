#include<stdio.h>
void fact() // function declaration
{
    int i,fact =1,n;
    printf("Enter number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("The factorial of %d is %d.\n",n,fact);
} // function defination
int main()
{
    // function call
    fact();
    return 0;
}