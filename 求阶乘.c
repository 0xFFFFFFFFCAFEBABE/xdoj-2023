#include <stdio.h>

void fact(int n) {
    int dp[21] = {0};
    dp[0] = 1;
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] * i;
        printf("%d ", dp[i]);
    }
}

int main() {
    int n;
    scanf("%d", &n);
    fact(n);
    return 0;
}