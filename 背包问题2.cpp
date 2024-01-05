#include <stdio.h>
#include <stdlib.h>

const int M = 1000000001;

int main() {
    int n;
    long long V;
    scanf("%d%lld", &n, &V);
    long long v[n];
    int c[n];
    int sum_c = 0;
    for (int i = 0; i < n; i = i + 1) {
        scanf("%lld", &v[i]);
    }
    for (int i = 0; i < n; i = i + 1) {
        scanf("%d", &c[i]);
        sum_c = sum_c + c[i];
    }
    long long dp[sum_c + 1];
    for (int i = 1; i < sum_c + 1; i = i + 1) {
        dp[i] = M;
    }
    dp[0] = 0;
    for (int i = 0; i < n; i = i + 1) {
        for (int j = sum_c; j >= c[i]; j = j - 1) {
            long long new_Value = dp[j - c[i]] + v[i];
            if (new_Value < dp[j]) {
                dp[j] = new_Value;
            }
        }
    }
    for (int i = sum_c; i >= 0; i = i - 1) {
        if (dp[i] <= V) {
            printf("%d\n", i);
            break;
        }
    }
    return 0;
}