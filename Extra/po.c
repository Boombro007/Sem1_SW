#include<stdio.h>

int main()
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);

    if(number>0)
    {
        printf("Positive\n");
    }
    else if(number <0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}