#include<stdio.h>
int main()
{
    int age;
    float gpa;
    char grade;
    
    printf("enter your age:");
    scanf("%d", &age);

    printf("enter your gpa:");
    scanf("%f", &gpa);

    printf("enter your grade:");
    scanf(" %c", &grade);

    printf("entered age is: %d",age);
    printf("entered gpa is: %f",gpa);
    printf("entered grade is: %c",grade);
    return 0;
}