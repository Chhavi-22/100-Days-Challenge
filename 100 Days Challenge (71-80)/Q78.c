//78 (2D Arrays)
//Find the sum of main diagonal elements for a square matrix.
#include <stdio.h>

int main(void) {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int mat[n][n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
            if (i == j) {
                sum += mat[i][j];
            }
        }
    }

    printf("Sum of main diagonal elements = %d\n", sum);
    return 0;
}
