#include<stdio.h>
#include <stdbool.h>

int main() {
    int n;
    int an[1002] = {0};
    scanf("%d", &n);

    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        an[temp]++;
    }

    bool flag = false;
    for (int i = 1; i <= 1000; i++) {
        int suml = 0;
        int sumr = 0;
        if (an[i] != 0) {
            for (int j = 1; j <= i - 1; j++) {
                suml += an[j];
            }
            for (int j = i + 1; j <= 1000; j++) {
                sumr += an[j];
            }
            if (suml == sumr) {
                printf("%d", i);
                flag = true;
                break;
            }
        }
    }

    if (!flag) {
        printf("-1");
    }
    return 0;
}