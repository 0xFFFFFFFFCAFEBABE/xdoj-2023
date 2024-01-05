#include <iostream>
#include <cstring>

int main() {
    int x1, y1, x2, y2, x3, y3, x4, y4;
    scanf("%d %d", &x1, &y1);
    scanf("%d %d", &x2, &y2);
    scanf("%d %d", &x3, &y3);
    scanf("%d %d", &x4, &y4);
    int v1x = x3 - x1;
    int v1y = y3 - y1;

    int v2x = x2 - x1;
    int v2y = y2 - y1;

    int result = std::abs(v1x * v2y - v1y * v2x);
    printf("%d", result);
    return 0;
}
