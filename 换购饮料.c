#include <stdio.h>

int drink(int n, int k, int sum) {
    if (n < k) {
        return sum + n;
    }
    return drink(n / k + n % k, k, sum + n - n % k);
}

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", drink(n, k, 0));
    return 0;
}