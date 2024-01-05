#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ITEMS 5

// 函数用于计算两个寻宝者获得的总价值差距最小的情况
int findMinDifference(int *items, int n) {
    int minDiff = __INT_MAX__;
    int i,j;
    // 计算所有可能的分配情况
    for (i = 0; i < (1 << MAX_ITEMS); ++i) {
        int sumA = 0, sumB = 0;

        // 根据当前分配情况计算两个寻宝者获得的总价值
        for (j = 0; j < MAX_ITEMS; ++j) {
            if (i & (1 << j)) {
                sumA += items[j + n];
            } else {
                sumB += items[j + n];
            }
        }

        // 更新最小差距
        int diff = abs(sumA - sumB);
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main() {
    int primes[20] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71}; // 前20个质数
    int n;
    scanf("%d", &n);

    // 调用函数计算最小差距
    int minDifference = findMinDifference(primes, n - 1);

    printf("%d\n", minDifference);

    return 0;
}
