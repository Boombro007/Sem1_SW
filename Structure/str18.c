#include<stdio.h>
struct book
{
    char title[20];
    float price;
    int pages;
};
void display(char t[],float p,int pp)
{
    printf("%s -Rs%.2f -%dPages\n",t,p,pp);
}
int main()
{
    struct book b1 = {"Learn C",675.50,375};
    display(b1.title,b1.price,b1.pages);
    return 0;
}