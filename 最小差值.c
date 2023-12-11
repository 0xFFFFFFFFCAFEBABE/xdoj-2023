#include <stdio.h>
#include <memory.h>
#include <math.h>


int hashList[10001] = {0};

int main() {
    int segs;
    scanf("%d", &segs);
    for (int i = 1; i < segs; i++) {
        int input;
        scanf("%d", &input);
        if (hashList[input] == 1) {
            printf("%d", 0);
            return 0;
        }
        hashList[input] = 1;
    }
    int lastNum = -1;
    int minDelta = 20000;
    for (int i = 0; i < 10001; i++) {
        if (hashList[i] == 0) {
            continue;
        }

        if (lastNum == -1) {
            lastNum = i;
            continue;
        }

        int diff = abs(lastNum - i);
        if (diff == 0) {
            minDelta = 0;
            break;
        }
        lastNum = i;
        minDelta = minDelta > diff ? diff : minDelta;
    }

    printf("%d", minDelta);
    return 0;
}