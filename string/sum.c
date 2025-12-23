#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a:\n");
    scanf("%d",&a);
    
    printf("Enter b:\n");
    scanf("%d",&b);

    /* There are two method for arithmatic operators:
    1. Use of third variable (Make a sum vaiable)
    2. Diret operation (Use directly in printf)*/

    printf("Sum is:%d\n", a + b);
    /* We can also use:
    Substraction: '-'
    Multiplication: '*'*/
    return 0;
}