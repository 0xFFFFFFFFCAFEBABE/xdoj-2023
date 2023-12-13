#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int input[114];

    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        input[i] = temp;
    }


    for (int i = 0; i < n - 2; ++i) {
        if (input[i] == 3 && input[i + 1] == 5 &&
            input[i + 2] == 7) {
            sum++;
        }
    }

    printf("%d", sum);
    return 0;
}