#include <stdio.h>
#include <math.h>

int main() {
    double r;
    int years;
    scanf("%lf %d", &r, &years);
    double p;
    p = pow(1+r, years);
    printf("%.2lf", p);
    return 0;
}