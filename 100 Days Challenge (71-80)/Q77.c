//Q77 (2D Arrays)
//Check if the elements on the diagonal of a matrix are distinct.
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int mat[n][n];
    int diag[n];   
    int distinct = 1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if (i == j) {
                diag[i] = mat[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (diag[i] == diag[j]) {
                distinct = 0;
                break;
            }
        }
        if (!distinct) break;
    }

    if (distinct)
        printf("Diagonal elements are distinct.\n");
    else
        printf("Diagonal elements are not distinct.\n");

    return 0;
}
