#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return *(char *) a - *(char *) b;
}

int main() {
    char newBuf[255];
    char buf[255];
    gets(buf);
    size_t len = strlen(buf);
    size_t newLen = 0;
    for (int i = 0; i < len; ++i) {
        if (buf[i] == '*') {
            continue;
        }
        newBuf[newLen] = buf[i];
        newLen++;
    }
    qsort(newBuf, newLen, 1, cmp);
    for (int i = 0; i < newLen; ++i) {
        printf("%c", newBuf[i]);
    }

    return 0;
}