#include <stdio.h>

int main() {
    int segs;
    scanf("%d", &segs);
    int inputs[1001];
    for (int i = 0; i < segs; i++) {
        scanf("%d", &inputs[i]);
    }

    int counter = 1;
    int lastNum = inputs[0];
    for (int i = 0; i < segs; i++) {
        if (inputs[i] != lastNum) {
            counter++;
            lastNum = inputs[i];
        }
    }

    printf("%d", counter);
    return 0;
}