#include <stdio.h>

int inputs[100000] = {0};

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputs[i]);
    }
    int mid = 0;
    if (n % 2 == 0) {
        mid = (inputs[n / 2 - 1] + inputs[n / 2]) / 2;
    } else {
        mid = inputs[(n - 1) / 2];
    }
    if (inputs[0] >= inputs[n - 1]) {
        //from big to small
        printf("%d %d %d", inputs[0], mid, inputs[n - 1]);
    } else {
        printf("%d %d %d", inputs[n - 1], mid, inputs[0]);
    }
    return 0;
}