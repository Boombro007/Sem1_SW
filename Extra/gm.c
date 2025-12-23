#include<stdio.h>
int main()
{
    int hour;
    printf("Enter the hour(0-23):");
    scanf("%d",&hour);
    if(hour >= 1 && hour <= 11)
    {
        printf("Good moring!!\n");
    }
    else if (hour >= 12 && hour <= 16)
    {
      printf("Good afternoon!!\n");
    }
    else if(hour >= 17 && hour <= 19)
    {
        printf("Good evening!!\n");
    }
    else
    {
        printf("Good night!!\n");
    }
    return 0;
}