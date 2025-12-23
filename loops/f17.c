#include<stdio.h>
int main()
{
    // this code is making a loop without using nested for loop...
    // for nested 
    int n=1,i,j;
    /*for(i=1;i<=3;i++)
    {
        for(j=1;j<=4;j++)
        {
            printf("%d \t",n);
            n++;
        }
        printf("\n");
    }*/
    for(i=1; i<5;i++)
    {
        printf("%d     ",i);
    }
    printf("\n");
    for(i=5; i<9;i++)
    {
        printf("%d     ",i);
    }
    printf("\n");
    for(i=9; i <=12;i++)
    {
        printf("%d     ",i);
    }
    return 0;
}    