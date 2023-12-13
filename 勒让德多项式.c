#include <stdio.h>
#include <string.h>

int main() {
    double dp[11] = {0};
    int n;
    scanf("%d", &n);
    double x;
    scanf("%lf", &x);
    dp[0] = 1;
    dp[1] = x;
    for (int i = 2; i <= n; ++i) {
        dp[i] = ((2 * n - 1) * x * dp[i - 1] - (n - 1) * dp[i - 2]) / n;
    }

    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += dp[i];
    }

    printf("%.4lf", sum);

    return 0;
}