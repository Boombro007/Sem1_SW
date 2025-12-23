#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter number of array:");
    scanf("%d",&n);
    int num[100];
    for(i=0;i<n;i++)
    {
        printf("Enter element of array:");
        scanf("%d",&num[i]);
        sum = sum + num[i];
    }
    printf("Sum = %d",sum);
    return 0;
}