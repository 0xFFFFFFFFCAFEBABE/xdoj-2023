#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cmp(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int main() {
    int n;
    scanf("%d", &n);
    double avg = 0;
    int i;
    int nums[11];
    for (i = 0; i < n; ++i) {
        scanf("%d", &nums[i]);
        avg += nums[i];
    }


    qsort(nums, n, 4, cmp);
    avg -= (nums[0] + nums[n - 1]);

    avg /= (n - 2);
    printf("%.2lf", avg);
    return 0;
}
