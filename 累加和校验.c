#include <stdio.h>
#include <string.h>

int main() {
    int CRC = 0;
    char src[101] = {'\0'};
    gets(src);
    int len = (int) strlen(src);

    for (int i = 0; i < len; i++) {
        CRC += src[i];
    }

    printf("%d", CRC & 0xFF);
    return 0;
}