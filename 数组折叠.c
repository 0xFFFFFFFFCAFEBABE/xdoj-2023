#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>
#include <math.h>


int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int size = (int) pow(2.0, (double) n);
    int dd[114514];
    for (int i = 0; i < size; ++i) {
        scanf("%d", &dd[i]);
    }


    int s1ze = 0;
    for (int i = 0; i < m; ++i) {
        s1ze = (int) pow(2.0, (double) n - i);
        for (int j = 0; j < s1ze / 2; ++j) {
            dd[j] = dd[j] + dd[s1ze - 1 - j];
        }
    }

    s1ze = (int) pow(2.0, (double) n - m);
    for (int i = 0; i < s1ze; ++i) {
        printf("%d ", dd[i]);
    }
    return 0;
}