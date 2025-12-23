#include<stdio.h>
int main()
{
    char *change[] = "BhavyaPatel";
    puts(change);
    change = "Bhavya";
    puts(change);
    // Using pointers we can change values of strings but using normal string we cant do it.. 
    return 0;
}