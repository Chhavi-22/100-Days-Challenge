//Q130.Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Error: Could not open students.txt for writing\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", s.name);
        printf("Roll Number: ");
        scanf("%d", &s.roll);
        printf("Marks: ");
        scanf("%f", &s.marks);

        fprintf(file, "%s %d %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);
    printf("\nStudent records written successfully to students.txt\n");

    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open students.txt for reading\n");
        return 1;
    }

    printf("\n--- Student Records ---\n");

    while (fscanf(file, "%s %d %f", s.name, &s.roll, &s.marks) == 3) {
        printf("Name: %s\t Roll: %d\t Marks: %.2f\n", s.name, s.roll, s.marks);
    }

    fclose(file);

    return 0;
}
