#include<stdio.h>
#include <stdbool.h>

int dp[101][101] = {0};

int main() {
    int n;
    scanf("%d", &n);
    int a, b;
    while (scanf("%d %d", &a, &b) != EOF) {
        dp[a][b] = 1;
    }

    bool finalFlag = false;
    for (int i = 1; i <= n; ++i) {
        bool flag = false;
        for (int j = 1; j <= n; ++j) {
            if (dp[i][j] == 1 && i != j) {
                flag = true;
                break;
            }
        }
        if (!flag) {
            for (int j = 1; j <= n; ++j) {
                if (dp[j][i] == 1 && i != j) {
                    flag = true;
                    break;
                }
            }
            if (flag) {
                finalFlag = true;
                printf("%d\n", i);
            }
        }
    }
    if (!finalFlag) {
        printf("0");
    }
    return 0;
}