#include<stdio.h>
int main()
{
    int x = 10;
    int *p=&x;
    printf("Address ptr = %d\n",&p);
    printf("Value ptr = %d\n",*p);
    printf("Address x = %d\n",&x);
    return 0;
}