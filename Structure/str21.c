#include<stdio.h>
void swap(int x,int y);
int main()
{
    int x = 12;
    int y = 80;
    printf("Before swap(main): x = %d , y = %d\n",x,y);
    swap(x,y);
    printf("After swap(main): x = %d , y = %d\n",x,y);
    return 0;
}
void swap(int x,int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("After swap (fun): x = %d , y = %d\n",x,y);
}