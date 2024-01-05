#include <iostream>
#include <cstring>

int map[101][101] = {0};

void paint(int n, int (*l)[4], int *result) {
    memset(result, 0, 300);
    for (int i = 0; i < n; ++i) {
        result[i * 2] = n - i;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = l[i][0]; j < l[i][2]; ++j) {
            for (int k = l[i][1]; k < l[i][3]; ++k) {
                map[j][k]++;
            }
        }
    }

    for (int i = 0; i < 100; ++i) {
        for (int j = 0; j < 100; ++j) {
            result[(n - map[i][j]) * 2 + 1]++;
        }
    }

    int tempResult[300];
    for (int i = 0; i < n; ++i) {
        if (result[i * 2 + 1] != 0) {
            memcpy(tempResult, result + i * 2, 300 - i * 2);
            memcpy(result, tempResult, 300 - i * 2);
            break;
        }
    }
}

int main() {
    int n, l[100][4];
    int result[300];
    int i;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d%d%d%d", &l[i][0], &l[i][1], &l[i][2], &l[i][3]);
    }

    paint(n, l, result);
    for (i = 0; i <= result[0]; i++) {
        printf("%d %d\n", result[i * 2], result[i * 2 + 1]);
    }

    return 0;
}
