#include<stdio.h>
int main()
{
    int i,j,k,n;
    printf("Enter a number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            for(k=1;k<=n-j-1;k++)
            {
                printf("*  ");
            }
        }
        printf("\n");    
    }
    return 0;
}