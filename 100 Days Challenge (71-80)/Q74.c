//Q74 (2D Arrays)
//Find the transpose of a matrix.
#include <stdio.h>

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int mat[n][m];        
    int trans[m][n];      

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            trans[j][i] = mat[i][j];
        }
    }

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}
