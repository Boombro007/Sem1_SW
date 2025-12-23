#include<stdio.h>
#include<stdlib.h>
struct book
{
    char title[10];
    char author[20];
    double price;
    int page;
};
int main()
{
    struct book book1 = {"Learn C","Dennis Rithcie",675.50,325},book;
    struct book book2 = book1;
    printf("Book Name : %s\n",book2.title);
    printf("Autho : %s\n",book2.author);
    printf("Price : %lf\n",book1.price);
    printf("Page : %d\n",book1.page);
    printf("Size : %d\n",sizeof(book2));
    return 0;
}