#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    double fSum = 0;
    double H = 0;
    for (int i = 0; i < n; ++i) {
        double x;
        scanf("%lf", &x);
        fSum += x;
        H -= x * log2(x);
    }

    if (fSum != 1) {
        printf("Error Input!");
    } else {
        printf("%.4lf", H);
    }
    return 0;
}