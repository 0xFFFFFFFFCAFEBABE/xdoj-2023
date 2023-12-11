#include <stdio.h>
#include <stdbool.h>

#define people 3
bool checkSeven(int num) {
    if (num % 7 == 0) return true;
    while (num != 0) {
        if (num % 10 == 7) {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main() {
    int n;
    scanf("%d", &n);
    int now_number = 1;
    int now_count = 1;
    int stu[people] = {0};
    while (now_count <= n) {
        if (checkSeven(now_number)) {
            //skip num
            stu[(now_number - 1) % people] += 1;
        } else {
            now_count++;
        }
        now_number++;
    }

    for (int i = 0; i < people; i++) {
        printf("%d", stu[i]);
        if (i != people - 1) {
            printf(" ");
        }
    }
    return 0;
}