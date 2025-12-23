#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name[20];
    int marks[3];
}s1[3];
int main()
{
    printf("Enter Id of 3 students:\n");
    for(int i=0;i<3;i++)
    {
        scanf("%d",&s1[i].id);
    }
    printf("Enter Name of 3 students:\n");
    for(int i=0;i<=3;i++)
    {
        fgets(s1[i].name,sizeof(s1[i].name),stdin);
    }
    printf("Enter marks of student-1:\n");
    for(int i=0;i<3;i++)
    {
        printf("Enter marks of %d subjects:",i);
        scanf("%d",&s1[1].marks);
    }
    printf("Enter marks of student-2:\n");
    for(int i=0;i<3;i++)
    {
        printf("Enter marks of %d subjects:",i);
        scanf("%d",&s1[2].marks);
    }
    printf("Enter marks of student-3:\n");
    for(int i=0;i<3;i++)
    {
        printf("Enter marks of %d subjects:",i);
        scanf("%d",&s1[3].marks);
    }
    printf("Id\tName\tSub-1\tSub-2\tSub-3\t");
    for(int i=0;i<3;i++)
    {
        printf("%d\t%s\t%d\t%d\t%d\n",s1[i].id,s1[i].name,s1[i].marks[0],s1[i].marks[1],s1[i].marks[2]);
    }
    return 0;
}