#include <iostream>
#include <cmath>

int main() {
    int n;
    scanf("%d", &n);
    int dp[101] = {0};
    for (int i = 0; i < n; ++i) {
        int t;
        scanf("%d", &t);
        for (int j = 1; j <= 100; ++j) {
            if (dp[j] == 0 && t != 0) {
                //checkAfter
                int cmb = 0;
                for (int k = j; k <= 100; ++k) {
                    if (dp[k] == 0) {
                        cmb++;
                    }
                    if (k % 5 == 0) {
                        break;
                    }
                }
                if (cmb >= t) {
                    for (int k = 0; k < t; ++k) {
                        printf("%d ", k + j);
                        dp[k + j] = 1;
                    }
                    t = 0;
                }
            }
        }

        for (int j = 1; j <= 100; ++j) {
            if (dp[j] == 0 && t != 0) {
                dp[j] = 1;
                t--;
                printf("%d ", j);
            }
        }

        printf("\n");
    }
    return 0;
}