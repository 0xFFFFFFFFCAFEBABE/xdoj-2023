#include <stdio.h>

int main() {
    int num;
    char c;
    scanf("%d,%c", &num, &c);
    printf("%d,%c", num + c, num + c);
    return 0;
}