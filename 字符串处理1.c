#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

bool flag = false;

int cvt(char c) {
    if (c >= 'A' && c <= 'F') {
        flag = true;
        return 10 + c - 'A';
    }
    if (c >= 'a' && c <= 'f') {
        flag = true;
        return 10 + c - 'a';
    }
    if (c >= '0' && c <= '9') {
        flag = true;
        return 0 + c - '0';
    }
    return 0;
}

int main() {
    char buf[256];
    gets(buf);
    size_t len = strlen(buf);
    int sum = 0;
    for (int i = 0; i < len; ++i) {
        sum += cvt(buf[i]);
    }

    if (flag) {
        printf("%d", sum);
    } else {
        printf("NO");
    }
    return 0;
}