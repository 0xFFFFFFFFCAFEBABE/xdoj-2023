#include <stdio.h>

char chrConvert(char raw) {
    return raw - 'A' + 'a';
}

int main() {
    char a, b, c, d, e;
    scanf("%c|%c|%c|%c|%c", &a, &b, &c, &d, &e);
    printf("%c%c%c%c%c!", a, b, c, d, e);
    return 0;
}