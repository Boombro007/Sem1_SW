#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    printf("------- Using scanf -------\n");
    printf("Enter your name:");
    scanf("%s",str);
    getchar();
    printf("Name = %s\n",str);

    printf("------- Usinf gets -------\n");
    printf("Enter your name:");
    gets(str);
    printf("Name = %s\n",str);

    printf("------- Using fgets -------\n");
    printf("Enter your name:");
    fgets(str , 20 , stdin);
    printf("Name = %s\n",str);
    return 0;
}