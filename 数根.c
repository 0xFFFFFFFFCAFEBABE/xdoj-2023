#include <stdio.h>

int getRoot(int num) {
    if (num / 10 == 0) {
        return num;
    }

    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    return getRoot(sum);
}

int main() {
    int n;
    scanf("%d", &n);

    printf("%d", getRoot(n));
    return 0;
}