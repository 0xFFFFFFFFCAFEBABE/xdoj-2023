#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isAlpha(char c) {
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        return true;
    } else {
        return false;
    }
}

int main() {
    char s[114514];
    gets(s);
    int alpha = 0;
    size_t slen = strlen(s);
    for (size_t i = 0; i < slen; i++) {
        if (isAlpha(s[i])) {
            alpha++;
        }
    }
    printf("%d", alpha);

    return 0;
}