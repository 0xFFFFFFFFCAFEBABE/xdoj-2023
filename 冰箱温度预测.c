#include <stdio.h>

int main() {
    int h, m;
    scanf("%d %d", &h, &m);
    double t = h + (double)m / 60;
    double T = 4*t*t / (t + 2) - 20;

    printf("%.2f", T);
    return 0;
}
