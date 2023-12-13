#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>

int main() {
    int n;
    scanf("%d", &n);
    int nums[114];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);
    }
    if (n % 2 == 0) {
        for (int i = n / 2; i < n; ++i) {
            printf("%d ", nums[i]);
        }
        for (int i = 0; i < n / 2; ++i) {
            printf("%d ", nums[i]);
        }
    } else {
        for (int i = (n + 1) / 2; i < n; ++i) {
            printf("%d ", nums[i]);
        }
        printf("%d ", nums[(n - 1) / 2]);
        for (int i = 0; i < (n - 1) / 2; ++i) {
            printf("%d ", nums[i]);
        }
    }

    return 0;
}