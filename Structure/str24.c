#include<stdio.h>
struct person
{
    char name[50];
    double no;
}p1[2];
int main()
{
    struct person p1[2] = {{"Bhavya Patel",6352516301},{"Rudra Patel",8511130347}};
    printf("-------------------------------\n");
    printf("|NAME|\t\t|PHONE No.|\n");
    printf("-------------------------------\n");
    for(int i=0;i<2;i++)
    {
        printf("|%s|\t|%.0lf|\n",p1[i].name,p1[i].no);
    }
    return 0;
}