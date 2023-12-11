#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int a = 0; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                if (n == (a * 100 + b * 10 + c + c * 100 + b * 10 + a)) {
                    printf("%d %d %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}