#include<stdio.h>
void swap(int *x,int *y);
int main()
{
    int x = 12;
    int y = 80;
    int *ptr1 = &x;
    int *ptr2 = &y;
    printf("Before swap(main): x = %d , y = %d\n",*ptr1,*ptr2);
    swap(&x,&y);
    printf("After swap(main): x = %d , y = %d\n",*ptr1,*ptr2);
    return 0;
}
void swap(int *x,int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("After swap (fun): x = %d , y = %d\n",x,y);
}