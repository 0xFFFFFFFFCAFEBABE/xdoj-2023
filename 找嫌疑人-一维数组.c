#include <stdio.h>
#include <stdbool.h>

int main() {
    printf("A B C D E F\n");
    int people[6] = {0};
    for (int i = 0; i <= 64; ++i) {
        //convert
        int temp = i;
        for (int j = 0; j < 6; j++) {
            people[j] = temp % 2;
            temp /= 2;
        }
        bool A, B, C, D, E, F;
        A = people[0];
        B = people[1];
        C = people[2];
        D = people[3];
        E = people[4];
        F = people[5];
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