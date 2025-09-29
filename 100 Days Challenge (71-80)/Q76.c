//Q76 (2D Arrays)
//Check if a matrix is symmetric.
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0; 

    int mat[n][n];

    // Input matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    int symmetric = 1;  
    for (int i = 0; i < n && symmetric; i++) {
        for (int j = 0; j < n; j++) {
            if (mat[i][j] != mat[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}
