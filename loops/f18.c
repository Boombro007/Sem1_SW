#include<stdio.h>
int main()
{
    int num,fact=1,count;
    printf("Enter a number for finding factorial:");
    scanf("%d",&num);

    for(count=2;count<=num;count++)
    {
        fact = fact * count;
    }
    printf("Factorial of %d is %d..",num,fact);
    return 0;
}