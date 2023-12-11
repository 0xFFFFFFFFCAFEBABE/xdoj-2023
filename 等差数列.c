#include<stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int main() {
    int n;
    scanf("%d", &n);
    int inputs[101];
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputs[i]);
    }

    qsort(inputs, n, 4, cmp);
    if (inputs[0] + inputs[2] == 2 * inputs[1]) {
        printf("%d", inputs[1] - inputs[0]);
    } else {
        printf("no");
    }
    return 0;
}