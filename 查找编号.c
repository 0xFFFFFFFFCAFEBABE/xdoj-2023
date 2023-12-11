#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int num) {
    if (num == 1 || num == 0) {
        return false;
    }
    if (num == 2 || num == 3) {
        return true;
    }
    for (int i = 2; i <= sqrt((double) num) + 1; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (isPrime(i) && isPrime(i + 2) && i + 2 <= n) {
            flag = true;
            printf("%d %d\n", i, i + 2);
        }
    }
    if(!flag)
    {
        printf("empty");
    }
    return 0;
}