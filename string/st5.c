#include<stdio.h>
int main()
{
    char names[3][20];
    int i;
    printf("Enter 3 names:");
    for(i=0;i<3;i++)
    {
        scanf("%s",names[i]);
    }
    printf("The names are:\n");
    for(i=0;i<3;i++)
    {
        printf("%s\n",names[i]);
    }
    return 0;
}