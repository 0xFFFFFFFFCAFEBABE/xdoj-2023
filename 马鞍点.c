#include<stdio.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int mat[101][101];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }
    bool flag = false;
    for (int i = 0; i < m; i++) {
        int row_min;
        int col_max;
        for (int j = 0; j < n; j++) {
            row_min = mat[i][j];
            col_max = row_min;
            for (int k = 0; k < n; k++) {
                row_min = min(row_min, mat[i][k]);
            }
            for (int k = 0; k < m; k++) {
                col_max = max(col_max, mat[k][j]);
            }
            if (row_min == mat[i][j] && col_max == mat[i][j]) {
                printf("%d %d %d\n", i, j, mat[i][j]);
                flag = true;
            }
        }

    }

    if (!flag) {
        printf("no\n");
    }
    return 0;
}