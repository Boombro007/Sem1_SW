#include<stdio.h>

int main()
{
    //Use of bitwise operator
    int A=23,B=34;
    // A= 0010111
    // B= 0100010
    //when we use & operator there only same number will appaer in output 
    // as per above on last second are on same place so output is 2.. 
    printf("The bitwise operator (&) is :%d", A & B);
    return 0;
}