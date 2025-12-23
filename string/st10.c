#include<stdio.h>
int main()
{
    char str[] = "India";
    char temp = str[0];
    str[0] = str[4];
    str[4] = temp;
    printf("%s\n",str);
    return 0;
}