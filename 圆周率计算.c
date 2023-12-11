#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long double _pi = 0;
    for (int i = 1; i <= 500000; i++) {
        int scl = 1;
        if (i % 2 == 0) {
            scl = -1;
        }
        _pi += 4 * (scl * 1 / (double) (i * 2 - 1));
    }

    printf("%.*Lf", n, _pi);
    return 0;
}