#include<stdio.h>
int main()
{
    int age;
    printf("Enter age:");
    scanf("%d",&age);
    
    if(age > 18)
    {
        printf("You are an adult..\n");
        printf("They can vote and drive..\n");
    }
    else
    {
        printf("You are a kid..\n");
    }
    return 0;
}