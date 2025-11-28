//Q138.Print all enum names and integer values using a loop.
#include <stdio.h>

int main() {
    enum Colors {RED, GREEN, BLUE, YELLOW, BLACK};
    enum Colors c;

    const char *names[] = {"RED", "GREEN", "BLUE", "YELLOW", "BLACK"};

    for(c = RED; c <= BLACK; c++) {
        printf("%s = %d\n", names[c], c);
    }

    return 0;
}
