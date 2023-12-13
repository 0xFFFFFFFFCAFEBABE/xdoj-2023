#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    scanf("%d", &n);
    int temp = n * n;
    int temp_n = n;
    bool flag = true;
    while (temp != 0 && temp_n != 0) {
        if (temp % 10 != temp_n % 10) {
            flag = false;
            break;
        }
        temp /= 10;
        temp_n /= 10;
    }

    printf("%d %d", n, flag);
    return 0;
}