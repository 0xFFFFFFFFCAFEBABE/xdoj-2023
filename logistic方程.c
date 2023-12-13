#include <stdio.h>
#include <stdbool.h>

int main() {
    double dp[1145] = {0};
    double x1, r;
    scanf("%lf %lf", &x1, &r);
    dp[1] = x1;
    double result;
    for (int i = 2; i <= 1000; ++i) {
        dp[i] = r * dp[i - 1] * (1 - dp[i - 1]);
        result = dp[i] - dp[i - 1];
        if (result < 0) result = -result;
        if (result < 0.00001) {
            printf("%.4lf 1", dp[i]);
            return 0;
        }
    }

    printf("%.4lf 0", dp[1000]);
    return 0;
}