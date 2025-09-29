//Q71 (2D Arrays)
//Read and print a matrix.
#include <stdio.h>

int main(void) {
    int n, m;
    if (scanf("%d %d", &n, &m) != 2) return 0;

    int mat[n][m];        
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (j) putchar(' ');
            printf("%d", mat[i][j]);
        }
        putchar('\n');
    }
    return 0;
}
