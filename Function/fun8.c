#include<stdio.h>
void matmul()
{
    int i,j,k,m,n,p,q;
    int num1[100][100];
    int num2[100][100];
    int mul[100][100];
    printf("Enter value of mxn:");
    scanf("%d%d",&m,&n);
    printf("Enter value of pxq:");
    scanf("%d%d",&p,&q);
    if(n == p)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("Enter element of [%d] [%d] of matrix-1:\n",i,j);
                scanf("%d",&num1[i][j]);
            }
        }
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("Enter element of [%d] [%d] of matrix-2:\n",i,j);
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
                    mul[i][j] += num1[i][k] * num2[k][j];
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
    matmul();
    return 0;
}