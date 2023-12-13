#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>
#include <math.h>


int main() {
    int n;
    scanf("%d", &n);
    double nums[1145];
    double mean = 0;
    for (int i = 0; i < n; ++i) {
        scanf("%lf", &nums[i]);
        mean += nums[i];
    }

    mean /= n;
    double S = 0;
    for (int i = 0; i < n; ++i) {
        S += (mean - nums[i]) * (mean - nums[i]);
    }
    S /= (n - 1);
    S = sqrt(S);

    int err = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] > mean + 3 * S || nums[i] < mean - 3 * S) {
            err++;
        }
    }
    printf("%.4lf %d", S, err);

    return 0;
}