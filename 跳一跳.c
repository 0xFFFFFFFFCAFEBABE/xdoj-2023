#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);
    int sum = 0;
    int combo = 0;
    while (c != 0) {
        if (c == 1) {
            sum++;
            combo = 0;
        } else if (c == 2) {
            combo++;
            sum = sum + combo * 2;
        }
        scanf("%d", &c);
    }
    printf("%d", sum);
    return 0;
}