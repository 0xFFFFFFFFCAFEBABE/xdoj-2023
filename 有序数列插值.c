#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int main() {
    int n;
    scanf("%d", &n);
    int ssq[100];
    for (int i = 0; i < n + 1; ++i) {
        scanf("%d", &ssq[i]);
    }
    qsort(ssq, n + 1, 4, cmp);
    for (int i = 0; i < n + 1; ++i) {
        printf("%d ", ssq[i]);
    }

    return 0;
}