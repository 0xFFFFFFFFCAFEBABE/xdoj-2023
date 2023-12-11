#include <stdio.h>

int ttl(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    while (n >= 10) {
        n = ttl(n);
    }
    printf("%d", n);
    return 0;
}