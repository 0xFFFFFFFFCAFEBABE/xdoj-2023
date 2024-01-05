#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *compress(char *src);

int main() {
    char src[100];
    scanf("%s", src);

    char *ps = compress(src);

    puts(ps);
    return 0;
}


char *compress(char *src) {
    int len = strlen(src);
    if (len == 0) return src;
    src = strcat(src, "Z");
    len++;
    int lastLen = 1;
    char lastChar = src[0];
    char *buf = (char *) malloc(255);
    memset(buf, 0, 255);

    int index = 0;
    for (int i = 1; i < len; ++i) {
        if (src[i] != lastChar) {
            if (lastLen <= 2) {
                for (int j = 0; j < lastLen; ++j) {
                    buf[index++] = lastChar;
                }
            } else {
                buf[index++] = lastChar;
                char numBuf[4];
                itoa(lastLen, numBuf, 10);

                strcat(buf, numBuf);
                index += strlen(numBuf);


            }
            lastChar = src[i];
            lastLen = 1;

        } else {
            lastLen++;
        }
    }

    return buf;
}

