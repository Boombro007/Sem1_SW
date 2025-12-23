#include<stdio.h>
void sumNum()
{
    int a,b;
    printf("Enter 'a' & 'b':");
    scanf("%d%d",&a,&b);
    int sum = a + b;
    printf("Sum = %d",sum);
}
int main()
{
    //function calls
    sumNum();
    return 0;
}