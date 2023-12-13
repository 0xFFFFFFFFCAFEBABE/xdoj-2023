#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    int s[100];
    int pw = 0;
    int index = 0;
    int s_min = 1145, s_max = -200;
    int s_min_i, s_max_i;
    for (int i = 0; i < N; ++i) {
        if (i == M - 1) {
            scanf("%d", &pw);
        } else {
            scanf("%d", &s[index]);
            if (s[index] < s_min) {
                s_min_i = index;
                s_min = s[index];
            } else if (s[index] > s_max) {
                s_max = s[index];
                s_max_i = index;
            }
            index++;
        }
    }


    float mean = 0;
    for (int i = 0; i < index; ++i) {
        if (i != s_max_i && i != s_min_i) {
            mean += s[i];
        }
    }
    int people = N - 3;
    if (s_max == pw) {
        people++;
        mean += pw;
    }
    if (s_min == pw) {
        mean += pw;
        people++;
    }
    mean /= (float) people;
    printf("%f", mean);
    return 0;
}