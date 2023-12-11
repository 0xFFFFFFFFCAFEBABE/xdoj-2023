#include <stdio.h>
#include <string.h>

int main() {
    char s[114514];
    char s2[114514];
    gets(s);
    gets(s2);
    printf("%s%s", s,s2);
    return 0;
}