#include <stdio.h>
#include <string.h>
#include <ctype.h>

int cvt(char hex) {
    if (hex >= '0' && hex <= '9') {
        return hex ^ 0x30;
    } else {
        return 10 + hex - 'a';
    }
}

int main() {
    char s[1145];
    gets(s);
    size_t slen = strlen(s);
    long long result = 0;
    for (int i = 0; i < slen; i++) {
        s[i] = tolower(s[i]);
        result *= 16;
        result += cvt(s[i]);
    }
    printf("%lld", result);

    return 0;
}