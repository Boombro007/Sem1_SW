#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    char grade;
};
int main()
{
    struct student s1 = {001,'A'};
    struct student sc1 = s1; // copy structure
    printf("ID : %d\n",sc1.id);
    printf("GRADE : %c\n",sc1.grade);
    return 0;
}