#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    int sum_even = 0;
    int even_s = 0;
    int sum_odd = 0;
    int even_odds = 0;
    int m;
    scanf("%d", &m);
    int dp[1145] = {0};
    for (int i = 1; i < 1000; ++i) {
        dp[i] = 3 * (i - 1) * (i - 1) + 2 * (i - 1) + 1;
    }

    for (int i = 0; i < 1000; ++i) {
        if (dp[i] < 100) continue;
        if (dp[i] % 2 == 0) {
            if (even_s == m) continue;
            even_s++;
            sum_even += dp[i];
        } else {
            if (even_odds == m - 1) continue;
            even_odds++;
            sum_odd += dp[i];
        }
    }

    printf("%d %d", sum_even, sum_odd);
    return 0;
}