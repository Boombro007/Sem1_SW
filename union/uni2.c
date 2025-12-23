#include<stdio.h>
union person
{
    int age;
    char name[50];
};
union date
{
    int date;
}d;
union month
{
    int month;
}m;
union year
{
    int year;
}y;
int main()
{
    union person p[10];
    for(int i=0;i<10;i++)
    {
        printf("Enter name of person - %d:",i+1);
        fgets(p[i].name,sizeof(p[i].name),stdin);
        printf("Enter birthdate(dd/mm/yyyy):");
        scanf("%d %d %d",&d.date,&m.month,&y.year);
        getchar();
        p[i].age = 2025 - y.year;
        if(p[i].age <= 18)
            printf("%d/%d/%d\n",d.date,m.month,y.year);
        else if (p[i].age >18 && p[i].age <60)
            printf("%d\n",p[i].age);
        else if(p[i].age >=60 && p[i].age<100)
            printf("Old person!!!\n");
        else
            printf("Invalid year!!!\n");
    }
    return 0;
}