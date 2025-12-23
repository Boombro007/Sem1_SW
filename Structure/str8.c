#include <stdio.h>
#include <string.h> 
struct Address {
    char city[20];
    int pincode;
};
struct Student {
    int id;
    struct Address current_address; 
};

int main() {
    struct Student student1 = {
        844,                          
        {                            
            "Mumbai",                 
            400001                    
        }
    };
    // printf("--- Student Details ---\n");
    printf("Student ID:  %d\n", student1.id);
    printf("City:        %s\n", student1.current_address.city);
    printf("Pincode:     %d\n", student1.current_address.pincode);
    return 0;
}