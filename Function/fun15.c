#include<stdio.h>
int power(int x,int y)
{
    if(y==0)
        return 0;
    else
        return x * pow(x,y-1);
}
void main()
{
    int base,exp,result;
    printf("Enter base value(x):");
    scanf("%d",&base);
    printf("Enter exp value(y):");
    scanf("%d",&exp);
    result = power(base,exp);
    printf("%d ^ %d = %d\n",base,exp,result);
}