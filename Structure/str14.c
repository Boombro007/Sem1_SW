#include<stdio.h>
#include<string.h>
union book
{
    char title[20];
    char author[30];
    int page;
    float price;
}book1;
int main()
{
    printf("---- BOOK DETAILS ----\n");
    strcpy(book1.title,"Learn C");
    printf("Name:%s\n",book1.title);
    strcpy(book1.author,"Dennis Ritchie");
    printf("Author:%s\n",book1.author);
    book1.page = 325;
    printf("Page:%d\n",book1.page);
    book1.price = 650.50;
    printf("Price:%.2f\n",book1.price);
    return 0;
}