#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter limit of n:");
    scanf("%d",&n);
    /*for (int i=0;i<=n;i++)
    {printf("%d\n",i)}*/
    while(i<=n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}