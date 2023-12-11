#include <stdio.h>
#include <math.h>

int main() {
    char a, b, c, d, e;
    scanf("%c %c %c %c %c", &a, &b, &c, &d, &e);
    a += 4;
    b += 4;
    c += 4;
    d += 4;
    e += 4;
    printf("%c%c%c%c%c", a, b, c, d, e);
    return 0;
}