#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a % b == 0) {
        printf("yes");
        return 0;
    } else {
        printf("%d %d", a / b, a % b);
        return 0;
    }
    return 0;
}