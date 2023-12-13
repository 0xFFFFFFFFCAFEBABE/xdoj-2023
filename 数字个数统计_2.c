#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (B < A) {
        A ^= B;
        B ^= A;
        A ^= B;
    }
    int a = 0, b = 0, c = 0, d = 0;
    for (int i = A; i <= B; ++i) {
        if (i % 3 == 0) a++;
        if (i % 4 == 0) b++;
        if (i % 5 == 0 && !(i % 2 == 0)) c++;
    }

    d = max(max(a % b, b % a), max(max(a % c, c % a), max(b % c, c % b)));
    printf("%d %d %d\n%d", a, b, c, d);
    return 0;
}