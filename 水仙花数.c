#include <stdio.h>
#include <math.h>

int f(int i) {
    int s = 0;
    if (i == 0) {
        return 1;
    }
    while (i != 0) {
        i /= 10;
        s++;
    }
    return s;
}

int function(int a, int b) {
    if (a > b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    int sssum = 0;
    for (int i = a; i <= b; i++) {
        int temp = i;
        int sum = 0;
        if (f(i) < 3) continue;
        while (temp != 0) {
            sum += pow((double) (temp % 10), (double) f(i));
            temp /= 10;
        }
        if (sum == i) {
            sssum++;
        }
    }
    return sssum;
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", function(a, b));
    return 0;
}