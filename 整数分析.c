#include <stdio.h>
#include <minmax.h>

int main() {
    int input;
    scanf("%d", &input);
    int max_in = -1;
    int min_in = 10;
    int weishu = 0;
    if (input == 0) {
        max_in = 0;
        min_in = 0;
        weishu = 1;
    }
    while (input != 0) {
        int now = input % 10;
        if (min(now, min_in) == now) {
            min_in = now;
        }

        if (max(now, max_in) == now) {
            max_in = now;
        }

        input /= 10;
        weishu++;
    }

    printf("%d %d %d", weishu, max_in, min_in);
    return 0;
}