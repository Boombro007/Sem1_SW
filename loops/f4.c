#include<stdio.h>
int main()
{
    //use of while loop to get odd number as output given by user..
    int i=1,n;
    printf("Enter a limit of printing odd number:");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i++);
        i++;
    }
    printf("i = %d",i);
    return 0;
}