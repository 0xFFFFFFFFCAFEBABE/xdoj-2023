#include <stdio.h>

int main() {
    char *a[] = {"zero", "one", "two",
                 "three", "four", "five",
                 "six", "seven", "eight",
                 "nine"};
    int c;
    scanf("%d", &c);
    printf("%s", a[c]);
    return 0;
}