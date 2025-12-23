#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    printf("Enter number of strings : ");
    scanf("%d",&n);
    char str[n][20];
    char temp[50];
    for(i=0;i<n;i++)
    {
        printf("Enter string %d : ",i+1);
        scanf("%s",str[i]);
        getchar();
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("\nsorted strings : \n\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}    