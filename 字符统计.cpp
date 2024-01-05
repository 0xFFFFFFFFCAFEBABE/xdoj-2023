#include<stdio.h>
#include <stack>
#include <cstring>
#include <cctype>

int main() {
    int i;
    char C;
    int n;
    scanf("%c %d", &C, &n);
    getchar();

    char buf[256];
    gets(buf);
    size_t len = strlen(buf);

    int sum = 0;
    for (i = 0; i < len; ++i) {
        if (n == 1 && buf[i] == C) {
            sum++;
        }
        if (n == 0 && (buf[i] == C || tolower(buf[i]) == tolower(C))) {
            sum++;
        }
    }

    printf("%d", sum);

    return 0;
}
