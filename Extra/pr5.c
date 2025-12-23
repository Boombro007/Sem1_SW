#include<stdio.h>
int main()
{
    int m;
    printf("Enter marks(0-100):");
    scanf("%d",&m);

    if(m>20)
    {
        printf("PASS..\n");
    }
    else
    {
        printf("Fail>>\n");
    }
    return 0;
}