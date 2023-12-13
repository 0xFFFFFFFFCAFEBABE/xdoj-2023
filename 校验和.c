#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int fx(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int n;
    scanf("%d", &n);
    int s = 0;
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        s += fx(temp);
    }

    printf("%d", s % 10);
    return 0;
}