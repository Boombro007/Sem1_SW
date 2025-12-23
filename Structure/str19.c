#include<stdio.h>
#include<string.h>
struct book
{
    char name[20];
    char author[20];
    int pages;
    float price;
}s1[3];
int main()
{
    printf("Enter Names of 3 books:\n");
    for(int i=0;i<3;i++)
    {
        fgets(s1[i].name,sizeof(s1[i].name),stdin);
    }
    printf("Enter Author`s Names of 3 books:\n");
    for(int i=0;i<=3;i++)
    {
        fgets(s1[i].author,sizeof(s1[i].author),stdin);
    }
    printf("Enter page of 3 books:\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&s1[i].pages);
    }
    printf("Enter price of 3 books:\n");
    for(int i=0;i<3;i++)
    {
        scanf("%f",&s1[i].price);
    }
    return 0;
}