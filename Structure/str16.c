#include<stdio.h>
struct mix
{
    union 
    {
        int i;
        char c;
    }u;
    int k;
};
int main()
{
    struct mix m = {10,'A'};
    printf("%d %c",m.u.i,m.u.c);
    return 0;
}