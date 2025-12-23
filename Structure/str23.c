#include<stdio.h>
struct book
{
    int id;
    char name[50];
    float price;
};
int main()
{
    struct book b1 = {2009,"Stranger Things",345.439};
    struct book *p = &b1;
    printf("ID : %d\n",p->id);
    printf("NAME : %s\n",p->name);
    printf("PRICE : %.2f",p->price);
    return 0;
}