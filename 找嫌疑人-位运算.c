#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("A B C D E F\n");
    for (int i = 0; i <= 64; ++i) {
        bool A, B, C, D, E, F;
        A = (i >> 5) & 1;
        B = (i >> 4) & 1;
        C = (i >> 3) & 1;
        D = (i >> 2) & 1;
        E = (i >> 1) & 1;
        F = (i >> 0) & 1;
        if (!(A | B)) continue;
        if (A + E + F < 2) continue;
        if ((A & D) == 1) continue;
        if (B + C == 1) continue;
        if (C + D != 1) continue;
        if (D == 0 && E == 1) continue;
        printf("%d %d %d %d %d %d\n", A, B, C, D, E, F);
    }
    return 0;
}