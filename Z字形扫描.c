#include <stdio.h>#include <stdbool.h>int step = 0;int mat[101][101];void reads__(int x, int y) {    printf("%d ", mat[x][y]);    step++;}void to_zuo_xia(int *x, int *y, int n) {    while (*x + 1 < n && *y - 1 >= 0) {        (*x)++;        (*y)--;        reads__(*x, *y);    }}void to_you_shang(int *x, int *y, int n) {    while (*x - 1 >= 0 && *y + 1 < n) {        (*x)--;        (*y)++;        reads__(*x, *y);    }}int main() {    int n;    scanf("%d", &n);    for (int i = 0; i < n; i++) {        for (int j = 0; j < n; j++) {            scanf("%d", &mat[i][j]);        }    }    bool isRight = true;    int x = 0, y = 0;    reads__(0, 0);    for (; step < n * n;) {        if (isRight) {            if (x == 0) {                if (y + 1 >= n) {                    x++;                    reads__(x, y);                } else {                    isRight = !isRight;                    y++;                    reads__(x, y);                }                to_zuo_xia(&x, &y, n);            } else {                isRight = !isRight;                y++;                reads__(x, y);                to_you_shang(&x, &y, n);            }        } else {            if (y == 0) {                if (x + 1 >= n) {                    y++;                    reads__(x, y);                } else {                    x++;                    reads__(x, y);                    isRight = !isRight;                }                to_you_shang(&x, &y, n);            } else {                x++;                isRight = !isRight;                reads__(x, y);                to_zuo_xia(&x, &y, n);            }        }    }    return 0;}