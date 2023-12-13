#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int hash[10001] = {0};
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        hash[temp]++;
    }


    int min_count = -1, min_index = -1;
    for (int i = 10000; i >= 1; --i) {
        if (hash[i] > min_count) {
            min_count = hash[i];
            min_index = i;
        } else if (hash[i] == min_count && i < min_index) {
            min_index = i;
        }
    }

    printf("%d", min_index);
    return 0;
}