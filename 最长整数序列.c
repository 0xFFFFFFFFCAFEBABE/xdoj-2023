#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    int dp[1145] = {0};
    int n;
    scanf("%d", &n);
    int LCS = 0;
    int input[1145];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &input[i]);
    }

    for (int i = 1; i < n; ++i) {
        if (input[i] == input[i - 1]) {
            dp[i] = dp[i - 1] + 1;
        } else {
            dp[i] = 0;
        }
        if (dp[i] > LCS) {
            LCS = dp[i];
        }
    }

    printf("%d", LCS + 1);


    return 0;
}