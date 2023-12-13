#include <stdio.h>

int check(int x, int y) {
    int p1 = (x - 4) * (x - 4) + (y - 4) * (y - 4);
    int p2 = (x + 4) * (x + 4) + (y + 4) * (y + 4);
    if (p1 >= p2) {
        return 2;
    } else {
        return 1;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int x, y;
        scanf("%d %d", &x, &y);
        printf("%d ", check(x, y));
    }
    return 0;
}