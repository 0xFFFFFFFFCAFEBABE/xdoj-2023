#include <stdio.h>

#define INTS 4

int main() {
    int inputs[INTS];
    for (int i = 0; i < INTS; i++) {
        scanf("%d", &inputs[i]);
    }

    for (int i = 0; i < INTS - 1; i++) {
        for (int j = 0; j < INTS - i - 1; j++) {
            if (inputs[j] > inputs[j + 1]) {
                inputs[j] ^= inputs[j + 1];
                inputs[j + 1] ^= inputs[j];
                inputs[j] ^= inputs[j + 1];
            }
        }
    }

    for (int i = 0; i < INTS; i++) {
        printf("%d", inputs[i]);
        if (i != INTS - 1) {
            printf(" ");
        }
    }
    return 0;
}