#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int ss[114];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &ss[i]);
    }

    int temp = INT_MAX;
    int t2 = -1;
    for (int i = 0; i < n; ++i) {
        if (ss[i] < temp) temp = ss[i], t2 = i;
    }

    temp = ss[t2];
    ss[t2] = ss[0];
    ss[0] = temp;

    temp = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (ss[i] > temp) temp = ss[i], t2 = i;
    }

    temp = ss[t2];
    ss[t2] = ss[n - 1];
    ss[n - 1] = temp;
    for (int i = 0; i < n; ++i) {
        printf("%d ", ss[i]);
    }
    return 0;
}