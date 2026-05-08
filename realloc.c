//realloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *city;
    city = (char *) malloc (10);
    if(city == NULL)
    {
        printf("Memory not allocated!\n");
        exit(1);
    }
    strcpy(city,"Khambhat");
    printf("City : %s\n",city);
    city = (char *)realloc(city,15);
    if(city == NULL)
    {
        printf("New memory not allocated!!\n");
        exit(1);
    }
    printf("City still : %s\n",city);
    strcpy(city,"Banaskatha");
    printf("City now : %s\n",city);
    free(city);
    return 0;
}