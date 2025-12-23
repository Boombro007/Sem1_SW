#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter a number:");
    scanf("%d",&n);
    a = n%10;
    b = n/100;
    if(a == b)
    {
        printf("Entered number is paladromine number..\n");
    }
    else
    {
        printf("Sorry.. it`s not a paladromine number..");
    }
    return 0;
}