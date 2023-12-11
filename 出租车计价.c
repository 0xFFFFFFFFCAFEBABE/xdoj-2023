#include <stdio.h>

int main() {
    double km;
    int time;
    scanf("%lf %d", &km, &time);
    double fee = 10.0;
    if (km > 3) {
        fee += (km - 3) * 2;
        if (km >= 13) {
            fee += km - 10;
        }
    }
    fee += 2 * (time / 5);

    printf("%.0lf", fee);
    return 0;
}