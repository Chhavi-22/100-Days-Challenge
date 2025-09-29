//Q73 (2D Arrays)
//Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int mat[n][m];        
    int rowSum[n];        

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < m; j++) {
            rowSum[i] += mat[i][j];
        }
    }

    printf("Row sums:\n");
    for (int i = 0; i < n; i++) {
        printf("Row %d sum = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
