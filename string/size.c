#include<stdio.h>

int main()
{
    char a ='a';
    unsigned char b ='b';
    short int c =1;

    printf("The value of char is %d\n", sizeof(char));
    printf("The value of unsigned is %d\n", sizeof(unsigned char));
    printf("The value of short int is %d\n",sizeof(short int));
    return 0;
}