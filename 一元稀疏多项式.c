#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    int n, m, t;
    scanf("%d %d %d", &n, &m, &t);
    int typ[700] = {0};

    for (int i = 0; i < n; ++i) {
        int v, exp;
        scanf("%d %d", &v, &exp);
        typ[100 + exp] += v;
    }

    for (int i = 0; i < m; ++i) {
        int v, exp;
        scanf("%d %d", &v, &exp);
        if (t == 0) {
            typ[100 + exp] += v;
        } else {
            typ[100 + exp] -= v;
        }
    }

    int fir = 0;
    int now = -100;
    do {
        if (typ[100 + now] == 0) {
            now++;
            continue;
        }
        if (now == 0) {
            printf("%d", typ[100 + now]);
            fir = 1;
        } else {
            int value = typ[100 + now];
            if (value == 0) {
                now++;
                continue;
            }
            if (value > 0) {
                if (fir == 1) {
                    printf("+");
                } else {
                    fir = 1;
                }
            }
            if (value == 1 || value == -1) {
                if (value == -1) {
                    printf("-");
                }
                if (now == 1) {
                    printf("x");
                } else {
                    printf("x^%d", now);
                }
            } else {
                if (now == 1) {
                    printf("%dx", value);
                } else {
                    printf("%dx^%d", value, now);
                }
            }

        }
        now++;
    } while (now < 500);

    return 0;
}
