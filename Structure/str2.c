#include<stdio.h>
struct student
{
    char name[50];
    int age;
    float grade;
};
int main()
{
    struct student s1 = {"Jimi",10,16};
    struct student s2 = {.age = 18,.name = "Divy",.grade = 28};
    printf("%s\t%d\t%.2f\n",s1.name,s1.age,s1.grade);
    printf("%s\t%d\t%.2f\n",s2.name,s2.age,s2.grade);
}