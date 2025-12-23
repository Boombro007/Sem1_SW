#include<stdio.h>
struct book
{
    char name[50];
    char author[30];
    int pages;
    float price;
};
int main()
{
    struct book book1 ={"Learn C","Dennis Rithcie",325,675.50};
    printf("---- BOOK-1 ----\n");
    printf("Name:    %s\n",book1.name);
    printf("Author:  %s\n",book1.author);
    printf("Page:    %d\n",book1.pages);
    printf("Price:   %.2f\n",book1.price);
    printf("\n");

    struct book book2 ={"Stranger things","Matt Duffer",209,555.50};
    printf("---- BOOK-2 ----\n");
    printf("Name:    %s\n",book2.name);
    printf("Author:  %s\n",book2.author);
    printf("Page:    %d\n",book2.pages);
    printf("Price:   %.2f\n",book2.price);
    printf("\n");

    struct book book3 ={"Great Expressions","Charles Dickes",292,275.50};
    printf("---- BOOK-3 ----\n");
    printf("Name:    %s\n",book3.name);
    printf("Author:  %s\n",book3.author);
    printf("Page:    %d\n",book3.pages);
    printf("Price:   %.2f\n",book3.price);
    printf("\n");
    return 0;
}