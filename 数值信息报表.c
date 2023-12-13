#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main() {
    int n;
    scanf("%d", &n);
    int all_sum = 0;
    int max_num = INT_MIN;
    int max_num_index = -1;
    int min_num = INT_MAX;
    int min_num_index = -1;
    for (int i = 0; i < n; ++i) {
        int temp;
        scanf("%d", &temp);
        all_sum += temp;
        if (temp > max_num) {
            max_num = temp;
            max_num_index = i + 1;
        }
        if (temp < min_num) {
            min_num = temp;
            min_num_index = i + 1;
        }
    }

    printf("%d %d %d %d %d", all_sum, max_num, max_num_index,
           min_num, min_num_index);
    return 0;
}