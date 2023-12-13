#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>
#include <math.h>


int main() {
    int n;
    scanf("%d", &n);
    int jishu = 0, oushu = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0)oushu += i;
        if (i % 2 != 0) jishu += i;
    }

    printf("%d %d", jishu, oushu);
    return 0;
}