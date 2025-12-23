#include<stdio.h>
int main()
{
    int n,i,avg,sum=0;
    printf("Enter number of Array:");
    scanf("%d",&n);
    int num[100];
    for(i=0;i<n;i++)
    {
        printf("Enter element of Array:");
        scanf("%d",&num[i]);
        sum = sum + num[i];
    }
    printf("Sum = %d\n",sum);
    avg = sum /n;
    printf("Aevrage is %d\n",avg);
    return 0;
}