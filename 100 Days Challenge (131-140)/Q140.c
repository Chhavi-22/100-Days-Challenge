//Q140.Define a struct with enum Gender and print person's gender
#include <stdio.h>

int main() {
    enum Gender {MALE, FEMALE, OTHER};

    struct Person {
        char name[20];
        enum Gender g;
    };

    struct Person p = {"Rahul", MALE};

    printf("Name: %s\n", p.name);

    if (p.g == MALE)
        printf("Gender: Male\n");
    else if (p.g == FEMALE)
        printf("Gender: Female\n");
    else
        printf("Gender: Other\n");

    return 0;
}
