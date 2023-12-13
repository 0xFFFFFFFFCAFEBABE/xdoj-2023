#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    char input[100];
    gets(input);
    size_t len = strlen(input);
    for (int i = 0; i < len; ++i) {
        char curr = input[i];
        if (curr <= 'z' && curr >= 'a') {
            printf("%c", 'a' + ((curr - 'a') + 13) % 26);
        } else if (curr <= 'Z' && curr >= 'A') {
            printf("%c", 'A' + ((curr - 'A') + 13) % 26);
        } else {
            printf("%c", curr);
        }
    }
    return 0;
}