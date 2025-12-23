//program-6
#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float percentage;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d",&n);

    struct student stu[n];
    struct student *ptr = stu;

    getchar();   

    for(int i=0;i<n;i++)
    {
        printf("Enter the name of student :");
        fgets(ptr->name,sizeof(ptr->name),stdin);

        printf("Enter the id students :");
        scanf("%d",&ptr->id);

        printf("Enter the percentage students :");
        scanf("%f",&ptr->percentage);

        getchar(); 
        ptr++;
    }

    ptr = stu;

    float max = ptr->percentage;   
    ptr++;

    for(int i=1;i<n;i++)
    {
        if(max < ptr->percentage)
        {
            max = ptr->percentage;
        }
        ptr++;
    }

    ptr = stu;

    for(int i=0;i<n;i++)
    {
        if(max == ptr->percentage)
        {
            printf("\nDetails of student having highest percentage:\n");
            printf("Name: %s",ptr->name);
            printf("ID: %d\n",ptr->id);
            printf("Percentage: %.2f\n",ptr->percentage);
            break;
        }
        ptr++;   
    }

    return 0;
}