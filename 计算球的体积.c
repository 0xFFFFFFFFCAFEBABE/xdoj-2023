#include <stdio.h>

int main() {
    double pi = 3.14;
    double r;
    scanf("%lf", &r);
    double V = 4.0/3.0 * pi * r*r*r;
    printf("%.2lf", V);
    return 0;
}