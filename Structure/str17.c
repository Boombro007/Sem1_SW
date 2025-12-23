#include<stdio.h>
#include<string.h>
union
{
    int id;
    char name[20];
    int marks;
}s1;
int main()
{
    s1.id = 844;
    printf("ID:%d\n",s1.id);
    strcpy(s1.name,"Bhavya");
    printf("Name:%s\n",s1.name);
    s1.marks = 99;
    printf("Marks:%d\n",s1.marks);
    return 0;
}