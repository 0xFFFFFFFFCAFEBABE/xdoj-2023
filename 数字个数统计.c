#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>

int main() {
    int n;
    scanf("%d", &n);
    int jishu = 0, oushu = 0, si_not_san = 0;
    for (int i = n; i <= n * n; ++i) {
        if (i % 2 == 0) {
            oushu++;
        } else {
            jishu++;
        }
        if (i % 4 == 0 && !(i % 3) == 0) {
            si_not_san++;
        }
    }
    int max_sum = jishu + oushu + si_not_san
                  - min(jishu, min(oushu, si_not_san));
    printf("%d %d %d\n%d", jishu, oushu, si_not_san, max_sum);
    return 0;
}