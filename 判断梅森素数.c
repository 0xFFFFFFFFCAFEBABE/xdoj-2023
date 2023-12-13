#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    int sq = (int) sqrt((double) num);
    for (int i = 2; i < sq + 1; ++i) {
        if (num % i == 0) return false;
    }

    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int pd = pow(2.0, (double) n);
    bool flag = isPrime(pd - 1);
    printf("%d %d", pd - 1, flag ? 1 : 0);
    return 0;
}