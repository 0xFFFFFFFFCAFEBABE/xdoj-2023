#include <stdio.h>
#include <stdbool.h>

bool isTri(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) return false;
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    int tri[31] = {0};
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tri[i]);
    }

    int sum = 0;
    for (int i = 0; i < n - 2; ++i) {
        if (isTri(tri[i], tri[i + 2], tri[i + 1])) {
            sum++;
        }
    }

    printf("%d", sum);
    return 0;
}