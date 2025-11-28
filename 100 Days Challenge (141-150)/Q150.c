//Q150.Use pointer to struct to modify and display data using -> operator.
#include <stdio.h>

struct Student {
    int roll;
    char name[20];
    float marks;
};

int main() {
    struct Student s1;          
    struct Student *ptr;       

    ptr = &s1;                  

    ptr->roll = 101;
    strcpy(ptr->name, "Aryan");
    ptr->marks = 89.5;
    
    printf("Roll Number: %d\n", ptr->roll);
    printf("Name: %s\n", ptr->name);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
