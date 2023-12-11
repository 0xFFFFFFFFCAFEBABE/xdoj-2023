#include <stdio.h>

int main() {
    double ele;
    scanf("%lf", &ele);
    double sum = 0;

    if (ele <= 110) {
        sum = 0.5 * ele;
    } else if (ele <= 210) {
        sum = 0.5 * 110 + (ele - 110) * 0.55;
    } else {
        sum = 0.5 * 110 + (210 - 110) * 0.55 + (ele - 210) * 0.70;
    }

    printf("%.2f", sum);
    return 0;
}