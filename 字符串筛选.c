#include <stdio.h>
#include <string.h>


int main() {
    char s[114514];
    gets(s);
    int alpha = 0;
    size_t slen = strlen(s);
    for (size_t i = 0; i < slen; i++) {
        if(i % 2 != 0) continue;
        printf("%c", s[i]);
    }
    return 0;
}