//program-1
#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    int *x,*y;
    int u,v;
    printf("Enter u & v:");
    scanf("%d %d",&u,&v);
    x = &u;
    y = &v;
    printf("u = %d,v = %d\n",u,v);
    //swap(&u,&v);
    swap(x,y);
    printf("u = %d,v = %d\n",u,v); 
    return 0;
}