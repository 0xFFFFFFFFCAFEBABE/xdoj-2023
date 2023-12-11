#include <stdio.h>
#include <memory.h>
#include <string.h>
#include <minmax.h>

int main() {
    int n, k;
    int sum = 0;
    int last = 0;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i) {
        if (last >= k) {
            sum++;
            last = 0;
        }
        int temp;
        scanf("%d", &temp);
        last += temp;
    }
    if (last > 0) sum++;

    printf("%d", sum);
    return 0;
}
