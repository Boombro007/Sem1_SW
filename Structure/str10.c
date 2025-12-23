#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book 
{
    char title[20];
    char author[20];
    float price;
    int pages;
};
int main()
{
    struct book book1 = {"Learn C","Dennis Ricthie",675.50,325};
    printf("Title: %s\n",book1.title);
    printf("Author: %s\n",book1.author);
    printf("Price: %.2f\n",book1.price);
    printf("Pages: %d\n",book1.pages);
    return 0;
}