#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter a number for reverse multiplication table:");
    scanf("%d",&n);

    for(i=10;i>=1;i--)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}