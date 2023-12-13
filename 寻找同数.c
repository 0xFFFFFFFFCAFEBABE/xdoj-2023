#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char buf[256];
    char m[14];
    gets(m);
    gets(buf);
    int sum = -1;
    char *ptr = buf - 1;
    do {
        ptr++;
        sum++;
        ptr = strstr(ptr, m);
    } while (ptr != NULL);
    printf("%d", sum);
    return 0;
}