//Q136.Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

int main() {
    enum Menu {ADD = 1, SUBTRACT, MULTIPLY};
    enum Menu choice;
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\n1. ADD\n2. SUBTRACT\n3. MULTIPLY\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD:
            printf("Result = %d\n", a + b);
            break;
        
        case SUBTRACT:
            printf("Result = %d\n", a - b);
            break;

        case MULTIPLY:
            printf("Result = %d\n", a * b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
