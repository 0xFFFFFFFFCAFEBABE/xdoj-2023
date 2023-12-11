#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int input[100001] = {0};
    for (int i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        input[temp]++;
    }

    for (int i = 0; i < 100000; i++) {
        if (input[i] != 0) {
            printf("%d:%d\n", i, input[i]);
        }
    }
    return 0;
}