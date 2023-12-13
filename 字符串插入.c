#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    char buf[256];
    gets(buf);
    char son[256];
    gets(son);
    int n;
    scanf("%d", &n);
    size_t f = strlen(buf);
    size_t s = strlen(son);
    for (int i = 0; i < n; ++i) {
        printf("%c", buf[i]);
    }
    for (int i = 0; i < s; ++i) {
        printf("%c", son[i]);
    }
    for (int i = n; i < f; ++i) {
        printf("%c", buf[i]);
    }
    return 0;
}