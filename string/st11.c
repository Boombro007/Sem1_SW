#include<stdio.h>
#include<string.h>
int main()
{
    char str1[] = "Hello";
    char str2[] = "World";
    strcpy(str1,str2);
    printf("%s",str1);
    return 0;
}
// in strcpy(x,y) string in 'y' is copied in 'x' and if we write any string to print then
// it only display y only and vice versa..