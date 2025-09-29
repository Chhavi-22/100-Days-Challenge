//Q75 (2D Arrays)
//Add two matrices.
#include <stdio.h>

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int A[n][m], B[n][m], Sum[n][m];

    printf("Enter elements of Matrix A:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("Sum of the two matrices:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", Sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
