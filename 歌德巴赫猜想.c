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

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 2; i <= n / 2; i++) {
        if (isPrime(i) && isPrime(n - i)) {
            printf("%d %d", i, n - i);
            break;
        }
    }
    return 0;
}