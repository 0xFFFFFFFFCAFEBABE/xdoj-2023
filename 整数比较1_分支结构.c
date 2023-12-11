#include <stdio.h>
#include <minmax.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d ", max(a, b) % 10);
    printf("%d", min(a, b) * min(a, b));
    return 0;
}