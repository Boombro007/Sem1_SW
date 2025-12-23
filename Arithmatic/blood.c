#include<stdio.h>

int main()
{
    int age,kg;
    printf("Enter Age :");
    scanf("%d",&age);
    printf("Enter Weight:");
    scanf("%d",&kg);

    if(age>=18 && age<=55)
    {
        if(kg>45 && kg<=90)
        {
            printf("You are eligible for blood donation...");
        }
        else
        {
            printf("You are not eligible");
        }
    }    
    else
    {
        printf("You are not eligible");
    }
    return 0;
}