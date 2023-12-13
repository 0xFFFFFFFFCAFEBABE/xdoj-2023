#include <stdio.h>
#include <math.h>

double my_sin(double num, int n) {
    double result = 0;
    for (int i = 1; i <= n; ++i) {
        double an = pow(num, i * 2.0 - 1.0) *
                    (i % 2 == 0 ? -1 : 1);
        for (int j = 1; j <= 2 * i - 1; ++j) {
            an /= j;
        }
        result += an;
    }

    return result;
}

int main() {
    int n;
    double x;
    scanf("%d %lf", &n, &x);
    printf("%.4lf", my_sin(x, n));
    return 0;
}