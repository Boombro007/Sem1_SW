#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student 
{
    int id;
    char name[50];
}s1[3];
int main()
{
    for(int i = 0;i < 3;i++)
    {
        printf("Enter Student-%d ID:",i);
        scanf("%d",&s1[i].id);
    }
    
    for(int i = 0;i < 3;i++)
    {
        printf("Enter student-%d names:",i);
        scanf("%s",s1[i].name);
    }
    printf("Id\tName\n");
    for(int i=0;i<3;i++)
    {
        printf("%d\t%s\n",s1[i].id,s1[i].name);
    }
    return 0;
}