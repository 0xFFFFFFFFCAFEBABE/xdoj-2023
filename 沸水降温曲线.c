#include <stdio.h>

int main() {
    int min, sec;
    scanf("%d %d", &min, &sec);
    double time = min * 1.0 + sec * 1.0 / 60.0;
    if (time <= 10) {
        printf("%.1lf", 100 - 5 * time);
    } else if (time <= 30) {
        printf("%.1lf", 60 - time);
    } else if (time <= 50) {
        printf("%.1lf", 30 - (time - 30) / 2.0);
    } else {
        printf("20.0");
    }
    return 0;
}