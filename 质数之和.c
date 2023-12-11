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
    if (a > b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    int counter = 1;
    int sum = 0;
    for (int i = 2; i < 999999; i++) {
        if (counter > b) {
            break;
        }
        if (isPrime(i)) {
            if (counter >= a && counter <= b) {
                sum += i;
            }
            counter++;
        }
    }

    printf("%d", sum);
    return 0;
}