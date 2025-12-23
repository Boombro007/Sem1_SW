#include<stdio.h>
int main()
{
    int a;
    int *p = &a;
    printf("Enter value of 'a':");
    scanf("%d",&a);
    printf("Value of 'p' = %d\n",*p);
    printf("Value of 'a' = %d\n",a);
    printf("Address of 'a' = %d\n",&a);
    printf("Address of 'p' = %d\n",&p);
    return 0;
}