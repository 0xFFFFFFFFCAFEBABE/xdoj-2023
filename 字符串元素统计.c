#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isNum(char c) {
    if (c >= '0' && c <= '9') {
        return true;
    } else {
        return false;
    }
}

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
    int nums = 0;
    int alpha = 0;
    size_t slen = strlen(s);
    for (size_t i = 0; i < slen; i++) {
        if (isAlpha(s[i])) {
            alpha++;
        } else if (isNum(s[i])) {
            nums++;
        }
    }
    printf("%d,%d", alpha, nums);

    return 0;
}