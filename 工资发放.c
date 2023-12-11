#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int a, b, c, d, e, f;
    a = num / 100;
    num %= 100;
    b = num / 50;
    num %= 50;
    c = num / 20;
    num %= 20;
    d = num / 10;
    num %= 10;
    e = num / 5;
    num %= 5;
    f = num;

    printf("%d %d %d %d %d %d", a, b, c, d, e, f);
    return 0;
}