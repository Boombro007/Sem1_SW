#include<stdio.h>
struct carnum
{
    int num;
};
int main()
{
    int n;
    int num[100];
    printf("Enter the amount of car:");
    scanf("%d",&n);
    printf("Enter number of %d cars:\n",n);
    for(int i=0;i<=n;i++)
    {
        if(num[i] <= 4)
        {
            scanf("%d",&num[i]);
        }
    }
    return 0;
}