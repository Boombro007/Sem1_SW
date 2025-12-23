#include<stdio.h>
int main()
{
    char name[20];
    char same[20]; 
    fgets(name,sizeof(name),stdin); // input of string
    fgets(same,sizeof(same),stdin);
    puts(name); // output of string
    puts(same);
    return 0;
}