#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct book
{
    char name[50];
    char author[20];
    int page;
    float price;
}book1,book2,book3;
int main()
{
    book1.page = 435;
    book1.price = 675.50;
    strcpy("Learn C",book1.name);
    strcpy("Dennis Ricthie",book1.author);

    printf("--- Book - 1---\n");
    printf("Name: %s\n",book1.name);
    printf("Author: %s\n",book1.author);
    printf("Price: %f\n",book1.price);
    printf("Page: %d\n",book1.page);

    book2.page = 335;
    book1.price = 605.50;
    strcpy("C basics",book2.name);
    strcpy("Dennis Ricthie",book2.author);

    printf("--- Book - 2---\n");
    printf("Name: %s\n",book2.name);
    printf("Author: %s\n",book2.author);
    printf("Price: %f\n",book2.price);
    printf("Page: %d\n",book2.page);

    book3.page = 135;
    book3.price = 275.50;
    strcpy("Stranger Things",book3.name);
    strcpy("Matt Duffer",book3.author);

    printf("--- Book - 3---\n");
    printf("Name: %s\n",book3.name);
    printf("Author: %s\n",book3.author);
    printf("Price: %f\n",book3.price);
    printf("Page: %d\n",book3.page);
    return 0;
}