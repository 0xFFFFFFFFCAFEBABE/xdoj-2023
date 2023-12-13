#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    double a;
    int s;
    scanf("%lf %d", &a, &s);
    double sum = 0;
    if (a <= 3) {
        sum = 10;
    } else if (a <= 10) {
        sum = 10 + (a - 3) * 2;
    } else {
        sum = 10 + (10 - 3) * 2 + (a - 10) * 3;
    }
    sum += (s / 5) * 2;
    printf("%.1lf", sum);
    return 0;
}