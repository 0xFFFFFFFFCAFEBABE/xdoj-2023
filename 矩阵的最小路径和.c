#include <stdio.h>
#include <math.h>
#include <minmax.h>

int dp[114][114] = {0};
int n = 0, m = 0;

int main() {

    int stackDep = 0;

    char c = getchar();
    do {
        if (c == '[') {
            stackDep++;
            if (stackDep == 2) {
                n++;
            }
        } else if (c == ']') {
            stackDep--;
        }

        int bufIndx = 0;
        char buf[5] = {0};
        int tempM = 0;
        while (stackDep == 2) {
            tempM++;
            while (1) {
                char d = getchar();
                if (d == ']') {
                    stackDep--;
                    break;
                }
                if (d == ',') {
                    break;
                }

                if (d < '0' || d > '9') continue;
                buf[bufIndx++] = d;
            }
            int result = 0;
            for (int i = 0; i < bufIndx; ++i) {
                result += (buf[i] ^ 0x30) * (int) pow(10.0, (double) (bufIndx - i - 1));
            }

            dp[n - 1][tempM - 1] = result;

            bufIndx = 0;
        }
        if (m == 0) {
            m = tempM;
        }
        c = getchar();
    } while (c != EOF && c != '\n');

    for (int i = 1; i < n; ++i) {
        dp[i][0] += dp[i - 1][0];
    }
    for (int i = 1; i < m; ++i) {
        dp[0][i] += dp[0][i - 1];
    }

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            dp[i][j] += min(dp[i][j - 1], dp[i - 1][j]);
        }
    }

    printf("%d", dp[n - 1][m - 1]);

    return 0;
}