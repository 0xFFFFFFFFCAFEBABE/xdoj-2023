#include<stdio.h>
#include <stdbool.h>

int main() {
    int n, k;
    bool flag = false;
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp == k) {
            printf("%d ", i);
            flag = true;
        }
    }

    if (!flag) {
        printf("-1");
    }
    return 0;
}