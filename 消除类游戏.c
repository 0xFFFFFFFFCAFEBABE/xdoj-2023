#include<stdio.h>
#include <stdbool.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int s[31][31];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &s[i][j]);
        }
    }

    //row
    for (int i = 0; i < n; i++) {
        int combo = 1;
        int last = 0;
        for (int j = 0; j < m; j++) {
            int now = s[i][j];
            if (now == last) {
                combo++;
                if (m == j + 1 && combo >= 3) {
                    for (int k = j - combo + 1; k <= j; k++) {
                        s[i][k] = -s[i][k];
                    }
                }
            } else {
                if (combo >= 3) {
                    for (int k = j - combo; k < j; k++) {
                        s[i][k] = -s[i][k];
                    }
                }
                combo = 1;
                last = now;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        int last = 0;
        int combo = 1;
        for (int j = 0; j < n; j++) {
            int now = s[j][i];
            if (now == last || now == -last) {
                combo++;
                if (n == j + 1 && combo >= 3) {
                    for (int k = j - combo + 1; k <= j; k++) {
                        if (s[k][i] > 0) {
                            s[k][i] = -s[k][i];
                        }
                    }
                }
            } else {
                if (combo >= 3) {
                    for (int k = j - combo; k < j; k++) {
                        if (s[k][i] > 0) {
                            s[k][i] = -s[k][i];
                        }
                    }
                }
                combo = 1;
                last = now;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (s[i][j] < 0) {
                s[i][j] = 0;
            }
            printf("%d", s[i][j]);
            if (j != m - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}