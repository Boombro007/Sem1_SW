#include<stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("A : %d\n",*p);
    printf("Addr : %p\n",p); // we can use %p for hexadecimal values..
    return 0;
}