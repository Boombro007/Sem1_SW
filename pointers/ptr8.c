#include<stdio.h>
int  changevar(float *cvar)
{
    *cvar = *cvar + 10.0;
    return *cvar;
}
int main()
{
    float x = 5.0;
    printf("Before : %.2f\n",x);
    changevar(&x);
    printf("After : %.2f\n",x);
}