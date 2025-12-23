#include<stdio.h>
struct book
{
    int id;
    char name[20];
    float price;
}it[4];
int main()
{
    printf("Enter Item Id:\n");
    for(int i=0;i<4;i++)
    {
        scanf("%d",&it[i].id);
    }
    printf("Enter Name of item:\n");
     for(int i=0;i<=4;i++)
    {
        fgets(it[i].name,sizeof(it[i].name),stdin);
    }
    printf("Enter Price of each item:\n");
     for(int i=0;i<4;i++)
    {
        scanf("%f",&it[i].price);
    }
    printf("ID\tNAME\tPRICE\n");
    for(int i=0;i<4;i++)
    {
        printf("%d\t%s\t%.1f\n",it[i].id,it[i].name,it[i].price);
    }
    return 0;
}