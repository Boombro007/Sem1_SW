// code of calloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,n;
    printf("Enter Size:");
    scanf("%d",&n);
    p = (int *)calloc(n , sizeof(int));
    if(p == NULL)
    {
        printf("Memory not allocated!!\n");
        exit(1);
    }
    printf("Enter Element of array:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    for(int i=0;i<n;i++)
    {
        printf("Address = %u,Element = %d\n",p+i,*(p+i));
    }
    free(p);
    return 0;
}