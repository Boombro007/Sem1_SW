//program-4
#include<stdio.h>
int max;
int *funt(int *p){
    int n;
    printf("Enter size of array : ");
    scanf("%d",&n);
    int arr[n];
    p=arr;
    for(int i=0;i<n;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",p++);
    }
    p=&arr[0];
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if((*p)>max)
        max=*p;
        p++;
    }
    return &max;
}
int main()
{
    int *p;
    printf("maximum value = %d",*funt(p));

    return 0;
}