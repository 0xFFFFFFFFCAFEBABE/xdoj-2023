#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>


int gcd(int m, int n) {
    int t, r;
    if (m < n) {
        t = m;
        m = n;
        n = t;
    }

    while ((m % n) != 0) {
        r = m % n;
        m = n;
        n = r;
    }

    return n;
}

int main() {
    int n;
    scanf("%d", &n);
    int sss[1145];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &sss[i]);
    }

    int sum = 0;
    for (int i = 0; i < n - 1; ++i) {
        sum += sss[i] * sss[i + 1] / gcd(sss[i], sss[i + 1]);
    }
    printf("%d", sum);
    return 0;
}