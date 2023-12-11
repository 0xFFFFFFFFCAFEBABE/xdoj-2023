#include <stdio.h>
#include <math.h>

int main() {
    double d, P, r;
    scanf("%lf %lf %lf", &d, &P, &r);
    double m;
    double f = P / (P - d * r);
    double z = 1 + r;
    m = log10(f) / log10(z);
    printf("%.2lf", m);
    return 0;
}