#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int main() {
    int n;
    int nums[102] = {0};
    int tNums[102] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);
        tNums[i] = nums[i];
    }

    bool can = true;
    qsort(tNums, n, 4, cmp);
    for (int i = 0; i < n - 2; ++i) {
        if (tNums[i] + tNums[i + 2] != 2*tNums[i + 1]) {
            can = false;
            break;
        }
    }
    if (can) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (tNums[i] == nums[j]) {
                    printf("%d ", j + 1);
                    break;
                }
            }
        }
    } else {
        int max_diff = INT_MIN;
        int min_diff = INT_MAX;
        for (int i = 1; i < n; ++i) {
            int diff = tNums[i] - tNums[i - 1];
            if (diff < 0) diff = -diff;
            if (diff > max_diff) max_diff = diff;
            if (diff < min_diff) min_diff = diff;
        }
        printf("%d %d", max_diff, min_diff);
    }
    return 0;
}