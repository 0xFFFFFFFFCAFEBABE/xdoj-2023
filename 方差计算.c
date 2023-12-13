#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int mean = 0;
    int x[100];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &x[i]);
        mean += x[i];
    }

    mean /= n;
    int p = 0;
    for (int i = 0; i < n; ++i) {
        p += (x[i] - mean) * (x[i] - mean);
    }

    p /= n;

    printf("%d", p);
    return 0;
}