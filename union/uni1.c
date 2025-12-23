#include<stdio.h>
union book
{
    int id;
    char name[30];
    float price;
};
int main()
{
    int n;
    printf("Enter number of books:");
    scanf("%d",&n);
    union book b1[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter id of book - %d:",i+1);
        scanf("%d",&b1[i].id);
        printf("ISBN NO. : %d\n",b1[i].id);
        getchar();
        printf("Enter name  of  book - %d:",i+1);
        fgets(b1[i].name,sizeof(b1[i].name),stdin);
        printf("NAME : %s\n",b1[i].name);
        printf("Enter price of book - %d:",i+1);
        scanf("%f",&b1[i].price);
        printf("PRICE : %.2f\n",b1[i].price);
    }
    return 0;
}