#include <stdio.h>
#include <math.h>

int main() {
    double result;
    double in;
    scanf("%lf", &in);
    if (in >= 0) {
        result = sqrt(in);
    } else {
        result = (in + 1) * (in + 1) + 2 * in + 1 / in;
    }

    printf("%.2f", result);
    return 0;
}