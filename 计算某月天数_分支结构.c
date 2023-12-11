#include <stdio.h>
#include <stdbool.h>

bool isRainNian(int year) {
    return (year % 400 == 0 || year % 100 != 0) && year % 4 == 0;
}

int main() {
    int inputYear, inputMonth;
    scanf("%d %d", &inputYear, &inputMonth);
    if (inputMonth == 2) {
        if (isRainNian(inputYear)) {
            printf("29");
        } else {
            printf("28");
        }
    } else if (inputMonth == 1 || inputMonth == 3 || inputMonth == 5 || inputMonth == 7 || inputMonth == 8 ||
               inputMonth == 10 || inputMonth == 12) {
        printf("31");
    } else {
        printf("30");
    }
    return 0;
}