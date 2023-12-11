#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n == 1 || n == 0) return false;
    if (n == 2) return true;

    for (int i = 2; i <= (int) sqrt((double) n); i++) {
        if (n % i == 0) return false;
    }

    return true;
}

int fib(int n) {
    int dp[42] = {0};
    dp[1] = 1;
    dp[2] = 1;
    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n;
    scanf("%d", &n);
    int f = fib(n);
    if(isPrime(f))
    {
        printf("yes");
    }
    else
    {
        printf("%d", f);
    }
    return 0;
}