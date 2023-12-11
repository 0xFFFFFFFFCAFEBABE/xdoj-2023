#include <stdio.h>
#include <stdbool.h>

bool isRunYear(int year) {
    return (year % 400 == 0 || year % 100 != 0) && year % 4 == 0;
}

int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int year;
    int count;
    scanf("%d %d", &year, &count);
    if (isRunYear(year)) {
        days[1]++;
    }

    for (int i = 0; i < 12; i++) {
        count -= days[i];
        if(count <= 0)
        {
            printf("%d %d", i + 1, days[i] + count);
            break;
        }
    }

    return 0;
}