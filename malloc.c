//malloc
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i;
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    p = (int *) malloc(n * sizeof(int));
    if(p == NULL)
    {
        printf("Memory not allocated !\n");
        exit(1);
    }
    printf("Enter Elements:\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",p+i);
    }
    printf("Elements:\n");
    for(int i=0;i<n;i++)
    {
        printf("Address = %u,Element = %d\n",p+i,*(p+i));
    }
    free(p);
    return 0;
}