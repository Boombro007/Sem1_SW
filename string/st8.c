#include<stdio.h>
int main()
{
    char str[] = "Test";
    str[2] = '\0';
    printf("%s\n",str);
    return 0;
}