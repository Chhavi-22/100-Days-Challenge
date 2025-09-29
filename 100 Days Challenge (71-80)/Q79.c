//Q79 (2D Arrays)
//Perform diagonal traversal of a matrix.
#include <stdio.h>

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int mat[n][m];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal Traversal:\n");
    for (int s = 0; s <= n + m - 2; s++) {   
        for (int i = 0; i < n; i++) {
            int j = s - i;
            if (j >= 0 && j < m) {
                printf("%d ", mat[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
