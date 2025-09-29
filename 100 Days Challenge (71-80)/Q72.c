//Q72 (2D Arrays)
//Find the sum of all elements in a matrix.
#include <stdio.h>

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int mat[n][m];   
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("Sum of all elements = %d\n", sum);
    return 0;
}
