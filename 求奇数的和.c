#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int sum = 0;
    while (num != 0) {
        if (num % 2 == 1) {
            sum += num;
        }
        scanf("%d", &num);
    }

    printf("%d", sum);
    return 0;
}