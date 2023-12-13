#include <stdio.h>
#include <stdbool.h>
#include <math.h>


int main() {
    int input[114] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &input[i]);
    }

    printf("%d ", (input[0] + input[1] + input[2]) / 3);
    for (int i = 1; i < n - 1; ++i) {
        int a = input[i];
        int b = input[i - 1];
        int c = input[i + 1];
        printf("%d ", (a + b + c) / 3);
    }
    printf("%d ", (input[n - 1] + input[n - 2] + input[n - 3]) / 3);
    return 0;
}