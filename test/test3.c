#include <stdio.h>
int max_of_four(int a,int b,int c,int d)
{
    int large=a;
    if(b>large)
    {
        large = b;
    }
    if(c>large)
    {
        large = c;
    }
    if(d>large)
    {
        large=d;
    }
    return large;
}
int main() {
    int a, b, c, d;
    int large_number;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    large_number=max_of_four(a, b, c, d);
    printf("%d",large_number);
    return 0;
}