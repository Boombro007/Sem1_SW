#include<stdio.h>
int main()
{
    char *name[3][25] = 
    {
        "New Zealand","Australia","India"
    };
    printf("==== Country ====\n");
    for(int i=0;i<3;i++)
    {
        printf("%s\n",name[i]);
    }
    return 0;
}