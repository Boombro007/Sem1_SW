#include<stdio.h>
int main()
{
    int i,j,k,n;
    char ch;
    printf("Enter number of lines:");
    scanf("%d",&n);
    printf("Enter a character or a digit:");
    scanf(" %c",&ch);

    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            printf(" ");
        }
        for(k=n-i;k>0;k--)
        {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}