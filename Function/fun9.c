#include<stdio.h>
void matmul(int m,int n,int p,int q)
{
    int i,j,k;
    int num1[100][100];
    int num2[100][100];
    int mul[100][100];
    if(n == p)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("Enter element of matrix-1:\n");
                scanf("%d",&num1[i][j]);
            }
        }
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("Enter element of matrix-2:\n");
                scanf("%d",&num2[i][j]);
            }
        }
        printf("Matrix-1:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("%d\t",num1[i][j]);
            }
            printf("\n");
        }
        printf("Matrix-2:\n");
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",num2[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                mul[i][j] = 0;
                for(k=0;k<m;k++)
                {
                    mul[i][j] = mul[i][j] + num1[i][k] * num2[k][j];
                }
            }
        }
        printf("Result:\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",mul[i][j]);
            }
            printf("\n");
        }
    }  
    else
    {
        printf("Invalid Dimensions\n");
    }
}
int main()
{
    int m,n,p,q;
    printf("Enter value of mxn:");
    scanf("%d%d",&m,&n);
    printf("Enter value of pxq:");
    scanf("%d%d",&p,&q);
    matmul(m,n,p,q);
    return 0;
}