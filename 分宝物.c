#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MAX_ITEMS 5

// �������ڼ�������Ѱ���߻�õ��ܼ�ֵ�����С�����
int findMinDifference(int *items, int n) {
    int minDiff = __INT_MAX__;
    int i,j;
    // �������п��ܵķ������
    for (i = 0; i < (1 << MAX_ITEMS); ++i) {
        int sumA = 0, sumB = 0;

        // ���ݵ�ǰ���������������Ѱ���߻�õ��ܼ�ֵ
        for (j = 0; j < MAX_ITEMS; ++j) {
            if (i & (1 << j)) {
                sumA += items[j + n];
            } else {
                sumB += items[j + n];
            }
        }

        // ������С���
        int diff = abs(sumA - sumB);
        if (diff < minDiff) {
            minDiff = diff;
        }
    }

    return minDiff;
}

int main() {
    int primes[20] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71}; // ǰ20������
    int n;
    scanf("%d", &n);

    // ���ú���������С���
    int minDifference = findMinDifference(primes, n - 1);

    printf("%d\n", minDifference);

    return 0;
}
