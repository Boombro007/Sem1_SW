#include<stdio.h>
#include<string.h>
int length(char arr[])
{
    int count =0;
    for(int i=0; arr[i] != '\0';i++)
    {
        for(int j=0;arr[j] = 'h';j++)
        {
            count++;
        }
    }
    return count-1;
}
int main()
{
    char name[100];
    fgets(name , 100 , stdin);
    length(name);
    printf("%d\n",length(name));
    return 0;
}