#include <stdio.h>

int main() {
    double t;
    scanf("%lf", &t);
    double A, B;
    A = 0.6 * t;
    B = 50 + 0.4 * t;
    if (A < B) {
        printf("%.2lf\n%.2lf\nA", A, B);
    } else {
        printf("%.2lf\n%.2lf\nB", A, B);
    }
    return 0;
}