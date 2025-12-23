#include<stdio.h>
void printstirng(char arr[])
{
    for(int i=0; arr[i] != '\0';i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}
int main()
{
    char firstname[] = "Bhavya";
    char lastname[] = "Patel";

    printstirng(firstname);
    printstirng(lastname);
    return 0;
}