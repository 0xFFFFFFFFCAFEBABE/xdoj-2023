#include <stdio.h>
#include <string.h>

int main() {
    char buf[256];
    gets(buf);
    size_t len = strlen(buf);
    int n;
    scanf("%d", &n);

    if (len < n) {
        printf("error");
        return 0;
    }

    char newBuf[256] = {0};
    memcpy(newBuf, buf + n - 1, len - n + 1);


    puts(newBuf);
    return 0;
}
