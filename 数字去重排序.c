#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int hash[1001] = {0};
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        if (hash[temp] == 0) {
            hash[temp] = 1;
        }
    }

    for (int i = 0; i <= 1000; ++i) {
        if (hash[i] != 0) {
            printf("%d ", i);
        }
    }
    return 0;
}