#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE*home;
    FILE*upper;
    FILE*lower;
    FILE*special;
    FILE*spaces;
    char str[100];
    int up,lw,sp,spl;
    home = fopen("Home.txt","w");
    if(home == NULL)
    {
        printf("Error!!\n");
        exit(1);
    }
    printf("Enter a string(Max:100):");
    scanf("%[^\n]",str);
    upper = fopen("upper.txt","w");
    if(upper == NULL)
    {
        printf("Error!!\n");
        exit(1);
    }
    for(int i=0;str[1] != '\0';i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            up++;
        }
    }
    fprintf("UPPER : %d\n",up);
    fclose(upper);
    lower = fopen("upper.txt","w");
    if(lower == NULL)
    {
        printf("Error!!\n");
        exit(1);
    }
    for(int i=0;str[1] != '\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            lw++;
        }
    }
    fprintf("LOWER : %d\n",lw);
    fclose(lower);
    spaces = fopen("upper.txt","w");
    if(spaces == NULL)
    {
        printf("Error!!\n");
        exit(1);
    }
    for(int i=0;str[1] != '\0';i++)
    {
        if(str[i] == ' ')
        {
            sp++;
        }
    }
    fprintf("SPACES : %d\n",sp);
    fclose(spaces);
    special = fopen("upper.txt","w");
    if(special == NULL)
    {
        printf("Error!!\n");
        exit(1);
    }
    spl = strlen(str);
    fprintf("SPECIAL: %d\n",spl-sp-lw-up);
    fclose(special);
    fclose(home);
    return 0;
}