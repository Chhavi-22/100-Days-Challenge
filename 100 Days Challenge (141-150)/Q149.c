//Q149.Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 100
typedef enum {
    MALE,
    FEMALE,
    OTHER
} Gender;

typedef struct {
    int id;
    char name[NAME_LEN];
    Gender gender;
    int age;
} Person;

int main() {
    
    Person *p = (Person *)malloc(sizeof(Person));

    if (p == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter ID: ");
    scanf("%d", &p->id);
    getchar();

    printf("Enter Name: ");
    fgets(p->name, NAME_LEN, stdin);
    p->name[strcspn(p->name, "\n")] = '\0'; 

    printf("Enter Gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    scanf("%d", (int *)&p->gender);

    printf("Enter Age: ");
    scanf("%d", &p->age);

    printf("\n--- Person Details ---\n");
    printf("ID: %d\n", p->id);
    printf("Name: %s\n", p->name);

    if (p->gender == MALE)       printf("Gender: MALE\n");
    else if (p->gender == FEMALE) printf("Gender: FEMALE\n");
    else                          printf("Gender: OTHER\n");

    printf("Age: %d\n", p->age);

    free(p);

    return 0;
}
