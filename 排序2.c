#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int even[101];
    int odd[101];
    int evens = 0;
    int odds = 0;
    int i = 0;
    int j = 0;
    for (i = 0; i < n; i++) {
        int temp;
        scanf("%d", &temp);
        if (temp % 2 == 1) {
            even[evens] = temp;
            evens++;
        } else {
            odd[odds] = temp;
            odds++;
        }
    }

    //sort
    for (i = 0; i < evens - 1; i++) {
        for (j = 0; j < evens - 1 - i; j++) {
            if (even[j + 1] > even[j]) {
                even[j + 1] ^= even[j];
                even[j] ^= even[j + 1];
                even[j + 1] ^= even[j];
            }
        }
    }
    for (i = 0; i < odds - 1; i++) {
        for (j = 0; j < odds - 1 - i; j++) {
            if (odd[j + 1] > odd[j]) {
                odd[j + 1] ^= odd[j];
                odd[j] ^= odd[j + 1];
                odd[j + 1] ^= odd[j];
            }
        }
    }

    for (j = 0; j < odds; j++) {
        printf("%d ", odd[j]);
    }
    for (i = 0; i < evens; i++) {
        printf("%d ", even[i]);
    }

    return 0;
}