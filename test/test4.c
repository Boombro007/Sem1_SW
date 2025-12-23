#include<stdio.h>
int main()
{
    int a[5] = {1,2,3,4,5};
    int *p = a;
    printf("a = %d\n",*p);
    p++;
    printf("a = %d\n",*p);
    printf("a = %d\n",*(p+1));
    printf("a = %d\n",*(p)+3);
    printf("a = %d\n",*p * 4);
    return 0;
}