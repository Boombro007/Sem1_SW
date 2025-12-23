#include<stdio.h>
struct abc{
    char a;
    char c;
    int b;
}var;
int main()
{
    printf("Size:%d",sizeof(var));
    return 0;
}