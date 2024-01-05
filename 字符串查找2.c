#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char buf[256];
    gets(buf);
    int sei = 0;
    scanf("%d", &sei);
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; ++i) {
        char buf2[256];
        char bufSave[256];
        gets(buf2);
        strcpy(bufSave, buf2);
        if (sei == 0) {
            for (int j = 0; j < strlen(buf2); ++j) {
                buf2[j] = tolower(buf2[j]);
            }
            for (int j = 0; j < strlen(buf); ++j) {
                buf[j] = tolower(buf[j]);
            }
        }
        char *r = strstr(buf2, buf);
        if (r == NULL) continue;
        printf("%s\n", bufSave);
    }
    return 0;
}