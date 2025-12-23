#include<stdio.h>
float percentage(int m,int c,int b)
{
    int total=m+c+b;
    
    printf("Total marks = %d\n",total);
    float percentage = total / 30;
    printf("Percentage = %f",percentage);
    return percentage;
}
char findgrade(float percentage)
{
    if(percentage >= 90)
        return 'A';
    else if(percentage >= 75)
        return 'B';
    else if(percentage >= 60)
        return 'C';
    else if(percentage >= 45)
        return 'D';
    else
        return 'F';     
}
int main()
{
    int m,c,b;
    float per;
    char grade;
    printf("Enter marks of 3 subjects:");
    scanf("%d%d%d",&m,&c,&b);
    per = percentage(m,c,b);
    grade = findgrade(per);
    printf("Grade = %d",grade);
    return 0;
}