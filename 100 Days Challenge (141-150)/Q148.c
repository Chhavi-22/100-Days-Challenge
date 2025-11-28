//Q148.Take two structs as input and check if they are identical.
#include <stdio.h>
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

void read_line(char *buf, int size) {
    if (fgets(buf, size, stdin) == NULL) {
        buf[0] = '\0';
        return;
    }
    size_t n = strlen(buf);
    if (n > 0 && buf[n-1] == '\n') buf[n-1] = '\0';
}

Gender read_gender() {
    int g;
    while (1) {
        if (scanf("%d", &g) != 1) {
            while (getchar() != '\n'); 
            printf("Please enter 0 (MALE), 1 (FEMALE) or 2 (OTHER): ");
            continue;
        }
        while (getchar() != '\n'); 
        if (g >= 0 && g <= 2) return (Gender)g;
        printf("Invalid. Enter 0 (MALE), 1 (FEMALE) or 2 (OTHER): ");
    }
}

int identical(const Person *a, const Person *b) {
    if (a->id != b->id) return 0;
    if (a->age != b->age) return 0;
    if (a->gender != b->gender) return 0;
    if (strcmp(a->name, b->name) != 0) return 0;
    return 1; 
}

void input_person(Person *p, int which) {
    printf("Enter details for Person %d\n", which);
    printf("ID (integer): ");
    while (scanf("%d", &p->id) != 1) {
        while (getchar() != '\n');
        printf("Invalid. Enter integer ID: ");
    }
    while (getchar() != '\n'); 

    printf("Name: ");
    read_line(p->name, NAME_LEN);

    printf("Gender (0=MALE, 1=FEMALE, 2=OTHER): ");
    p->gender = read_gender();

    printf("Age (integer): ");
    while (scanf("%d", &p->age) != 1) {
        while (getchar() != '\n');
        printf("Invalid. Enter integer age: ");
    }
    while (getchar() != '\n');
    printf("\n");
}

int main(void) {
    Person p1, p2;

    input_person(&p1, 1);
    input_person(&p2, 2);

    if (identical(&p1, &p2)) {
        printf("The two structs are IDENTICAL.\n");
    } else {
        printf("The two structs are NOT identical.\n");
    }

    return 0;
}
