#include <stdio.h>

int main() {
    int S;
    scanf("%d", &S);
    int tax = 0;
    int A = S - 3500;
    if (A <= 0) {
        printf("%d", S);
        return 0;
    } else if (A <= 1500) {
        tax = A * 0.03;
    } else if (A <= 4500) {
        tax = 1500 * 0.03 + 0.1 * (A - 1500);
    } else if (A <= 9000) {
        tax = 1500 * 0.03 + 0.1 * (4500 - 1500) + (A - 4500) * 0.20;
    } else if (A <= 35000) {
        tax = 1500 * 0.03 + 0.1 * (4500 - 1500) + (9000 - 4500) * 0.20 + (A - 9000) * 0.25;
    } else {
        tax = 1500 * 0.03 + 0.1 * 3000 + (9000 - 4500) * 0.20 + (35000 - 9000) * 0.25 + (A - 35000) * 0.30;
    }

    printf("%d", S - tax);
    return 0;
}