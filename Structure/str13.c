#include<stdio.h>
struct student
{
    char name[20];
    char author[30];
    int pages;
    float price;
}s1[3];
int main()
{
    printf("Enter Name:\n");
    for(int i=0;i<3;i++)
    {
        fgets(s1[i].name,sizeof(s1[i].name),stdin);
    }
    printf("Enter Author`s Name:\n");
    for(int i=0;i<3;i++)
    {
        fgets(s1[i].author,sizeof(s1[i].author),stdin);
    }
    printf("Enter pages:\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&s1[i].pages);
    }
    printf("Enter prices:\n");
    for(int i=0;i<3;i++)
    {
        scanf("%f",&s1[i].price);
    }
    printf("Name\tAuthor`s Name\tPage\tPrice\n");
    for(int i=0;i<3;i++)
    {
        printf("%s\t\t%s\t\t\t%d\t\t%.2f\n",s1[i].name,s1[i].author,s1[i].pages,s1[i].price);
    }
}