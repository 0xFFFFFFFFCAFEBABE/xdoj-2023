#include <stdio.h>
#include<stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char input[114];
    gets(input);
    size_t len = strlen(input);
    int i;
    for (i = 0; i < len; ++i) {
        putchar(input[i]);
        if (i == len - 1) continue;
        putchar(' ');
    }

    return 0;
}