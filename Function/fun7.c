#include <stdio.h>

void printFactorial(int n) 
{
    int i,fact=1;
    printf("Enter the factorial of %d:",n);
    for(i=1;i<=n;i++)
    {
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
}
int main()
{
    //factorial call
    printFactorial(10);
    return 0;
}