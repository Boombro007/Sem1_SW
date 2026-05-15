#include<stdio.h>
int main()
{   
    int n;
    int sum = 0;
    int t;
    scanf("%d",&n);
    if(n >=10000 && n <= 99999)
    {
        t = n;
        while (t > 0)
        {
            int d = t % 10;
            sum += d;
            t = t /10;
        }
        printf("%d",sum);
    }
    else
    {
        printf("invalid number!!\n");
    }
    return 0;
}