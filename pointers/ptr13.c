//program-5
#include<stdio.h>
int main()
{
    int r, c, p=1;
    printf("Enter number of row and column:");
    scanf("%d %d",&r,&c);
    int arr[r][c], symm[r][c];
    int *ptr1 = &arr[0][0], *ptr2 = &symm[0][0];
    printf("Enter elements of matrix:\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            scanf("%d",(ptr1+i*r+j));
        }

    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            symm[j][i]=arr[i][j];
        }
    }
    
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if((ptr1+i*r+j)!=(ptr2+j*r+i))
            {
                p = 0;
                break;
            }
            else
            p=1;
        }
    }
    if(p==1)
    {
        printf("Matrix is Symmetric");
    }
    else
    {
        printf("Matrix is not Symmetric");
    }
}