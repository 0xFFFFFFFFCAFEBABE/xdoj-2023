#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum = sum - (double) i / (double) (i * 2 - 1);
        } else {
            sum = sum + (double) i / (double) (i * 2 - 1);
        }
    }

    printf("%.3f", sum);
    return 0;
}