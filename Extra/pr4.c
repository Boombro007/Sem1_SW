#include<stdio.h>

int main()
{
    int a;
    printf("If the output is '1' then 'EVEN' and for '0' is 'ODD'..\n");
    printf("Enter value of 'a':");
    scanf("%d",&a);
    printf("%d", a % 2==0);
    return 0;
}