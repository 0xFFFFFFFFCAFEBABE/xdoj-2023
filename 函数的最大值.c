#include <stdio.h>
#include <string.h>

double a;

double fx(double x) {
    return -x * x * x + a * x * x;
}

int main() {
    scanf("%lf", &a);
    double max_value = -114514;
    for (int i = 0; i <= 100000; ++i) {
        double v = fx(0 + i * 0.0001);
        if (v > max_value) {
            max_value = v;
        }
    }

    printf("%.2lf", max_value);
    return 0;
}