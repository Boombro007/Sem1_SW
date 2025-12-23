#include<stdio.h>
#include<stdlib.h>
struct student
{
    int id;
    struct address
    {
        char city[20];
        int pincode;
    }addr;
};
int main()
{
    struct student s1 = {844,{"Anand",388130}}; // nested structure
    printf("Id : %d\n",s1.id);
    printf("City : %s\n",s1.addr.city);
    printf("Pincode : %d\n",s1.addr.pincode);
    return 0;
}