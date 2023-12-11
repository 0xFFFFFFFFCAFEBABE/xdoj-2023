#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num == 2) return true;
    for (int i = 2; i < (int) sqrt((double) num) + 1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            continue;
        }
        //Not a Prime number. Factor it.
        int sum = 1;
        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                sum += j;
            }
        }

        if (sum == i) {
            printf("%d\n", i);
        }

    }
    return 0;
}