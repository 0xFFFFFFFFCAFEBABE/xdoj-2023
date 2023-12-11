#include <stdio.h>

void printBlank(int num) {
    for (int j = 0; j < num; j++) {
        printf(" ");
    }
}

int main() {
    char c;
    scanf("%c", &c);
    int num = c - 'A' + 1;
    for (int i = 0; i < num; i++) {
        printBlank(num - i - 1);
        for (int j = 0; j <= i * 2; j++) {
            if (j <= i) {
                printf("%c", 'A' + j);
            } else {
                printf("%c", 'A' + i * 2 - j);
            }
        }
        printBlank(num - i - 1);
        printf("\n");
    }
    return 0;
}