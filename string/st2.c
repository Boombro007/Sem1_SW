#include <stdio.h>
int main()
{
    char str[100];
    printf("Enter your name :");
    fgets(str,100,stdin);
    printf("Name = %s\n",str);
    return 0;
}