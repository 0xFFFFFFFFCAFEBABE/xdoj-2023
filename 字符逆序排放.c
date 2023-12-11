#include <stdio.h>
#include <string.h>

int main() {
    char a[114514];
    gets(a);
    size_t l = strlen(a);
    for (int i = 0; i < l; i++) {
        printf("%c", a[l - i - 1]);
    }
    return 0;
}