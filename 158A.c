#include<stdio.h>
int main()
{
    int n,k; 
    scanf("%d %d",&n,&k);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int count=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[k-1] >0)
        {
            if(a[i] >= a[k-1])
            { 
                count++;
            }
        }
        else
        {
            if(a[i] > a[k-1])
            { 
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}