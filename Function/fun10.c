#include<stdio.h>
int square(int x)
{
    return x*x;
}
int sumofsquares(int a,int b)
{
    return square(a)+square(b);
}
int main()
{
    int num1 , num2 ;
    printf("Enter number 1:");
    scanf("%d",&num1);
    printf("Enter number 2:");
    scanf("%d",&num2);
    int result = sumofsquares(num1,num2);
    printf("Sum of squares of %d and %d is: %d",num1,num2,result);
    return 0;
}