#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <minmax.h>
#include <stdbool.h>

int main() {
    char buf[256];
    gets(buf);
    char son[114];
    gets(son);
    char *r = strstr(buf, son);
    if (r == NULL) {
        printf("No!");
    } else {
        printf("%ld", r - buf + 1);
    }
    return 0;
}