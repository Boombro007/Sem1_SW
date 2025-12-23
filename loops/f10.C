#include<stdio.h>
int main()
{
    // made a code that when you put number multiple of "7"..
    int n;
    do
    {
        printf("Enter a number multiple of 7:");
        scanf("%d",&n);

        if(n % 7 == 0){
            break;
        }
    } while (1);
    printf("Dofa multiple of 7 kidhu che!!!");
    return 0;
}