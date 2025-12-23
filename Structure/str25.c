#include<stdio.h>
struct person
{
    char name[50];
    double no;
}p1[2];
int main()
{
    struct person p1[2];
    for(int i=0;i<2;i++)
    {
        printf("Enter Moblie no. :");
        scanf("%lf",&p1[i].no);
        getchar();
        printf("Enter Name:");
        fgets(p1[i].name,sizeof(p1[i].name),stdin);
        
    }
    printf("-------------------------------\n");
    printf("|NAME|\t\t|PHONE No.|\n");
    printf("-------------------------------\n");
    for(int i=0;i<2;i++)
    {
        printf("%s\t%.0lf\n",p1[i].name,p1[i].no);
    }
    return 0;
}