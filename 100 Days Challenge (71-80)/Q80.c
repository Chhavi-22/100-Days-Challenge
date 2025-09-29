//Q80 (2D Arrays)
//Multiply two matrices.
#include <stdio.h>

int main(void) {
    int n, m, p;

    scanf("%d %d %d", &n, &m, &p);

    int A[n][m], B[m][p], C[n][p];

    printf("Enter elements of Matrix A (%d x %d):\n", n, m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of Matrix B (%d x %d):\n", m, p);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("Resultant Matrix (A x B):\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
