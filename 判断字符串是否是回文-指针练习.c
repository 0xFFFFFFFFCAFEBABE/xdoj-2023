#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main() {
    char buf[256];
    gets(buf);
    int len = strlen(buf);
    char *l, *r;
    l = buf;
    r = buf + len - 1;
    while (l < r) {
        if (*l != *r) {
            printf("no\n");
            return 0;
        }
        l++;
        r--;
    }

    printf("yes");
    return 0;
}
