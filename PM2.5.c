#include <stdio.h>

int main() {
    int days;
    int Pis[1001];
    scanf("%d", &days);
    double avg = 0;
    for (int i = 0; i < days; ++i) {
        scanf("%d", &Pis[i]);
        avg += Pis[i];
    }
    avg /= days * 1.0;
    printf("%.2f\n", avg);
    int dayOfPM[6] = {0};
    for (int i = 0; i < days; ++i) {
        int m;
        if (Pis[i] <= 50) {
            m = 1;
        } else if (Pis[i] <= 100) {
            m = 2;
        } else if (Pis[i] <= 150) {
            m = 3;
        } else if (Pis[i] <= 200) {
            m = 4;
        } else if (Pis[i] <= 300) {
            m = 5;
        } else {
            m = 6;
        }
        dayOfPM[m - 1]++;
    }

    for (int i = 0; i < 6; ++i) {
        if (i != 0) {
            printf(" ");
        }
        printf("%d", dayOfPM[i]);
    }
    return 0;
}