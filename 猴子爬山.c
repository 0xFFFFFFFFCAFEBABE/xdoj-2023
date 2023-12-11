#include <stdio.h>
#include <stdlib.h>


int main() {
    int dp[51] = {0};
    int n;
    scanf("%d", &n);
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;
    for (int i = 4; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 3];
    }

    printf("%d", dp[n]);
    return 0;
}