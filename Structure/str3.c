#include<stdio.h>
struct employe
{
    int id;
    char name[30];
    float salary;
};
int main()
{
    int n;
    int id1[10];
    int salary1[10];
    char name1[30];

    printf("Enter number of members(Max:10):");
    scanf("%d",&n);

    printf("Enter id Numbers:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&id1[i]);
    }
    printf("Enter first name of all members:");
    for(int i=0;i<=n;i++)
    {
        fgets(name1,30,stdin);
    }
    printf("Enter salary of each members:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&salary1);
    }

    struct employe a1 = {899,"Bhavya",1.5};
    struct employe a2 = {900,"Jimi",1.1};
    struct employe a3 = {901,"Divy",1.05};
    struct employe a4 = {902,"Krish",1};

    printf("ID\tName\tSalary(in Lacs)\n");
    printf("%d\t%s\t\t%.1f\n",a1.id,a1.name,a1.salary);
    printf("%d\t%s\t\t%.1f\n",a2.id,a2.name,a2.salary);
    printf("%d\t%s\t\t%.1f\n",a3.id,a3.name,a3.salary);
    printf("%d\t%s\t\t%.1f\n",a4.id,a4.name,a4.salary);
}