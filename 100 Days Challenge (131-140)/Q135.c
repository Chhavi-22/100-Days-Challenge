//Q135.Assign explicit values starting from 10 and print them.
#include <stdio.h>

int main() {
    enum Numbers {A = 10, B, C, D}; 

    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("D = %d\n", D);

    return 0;
}
