#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>

int main() {
    int m, k;
    scanf("%d %d", &m, &k);
    int dp[1145] = {0};
    dp[1] = 2;
    dp[2] = 3;
    int a = 0, b = 0, c = 0;
    for (int i = 3; i <= k; ++i) {
        dp[i] = (i - 1) * (i - 1) + 3 * (i - 2) + 1;
    }

    for (int i = 1; i <= k; ++i) {
        if (dp[i] % m == 0) a++;
        if (dp[i] % m == 1) b++;
        if (dp[i] % m > 1) c++;
    }
    printf("%d %d %d", a, b, c);

    return 0;
}