#include <stdio.h>

int main() {
    int nums;
    scanf("%d", &nums);
    int maxDig = 0;
    int maxNum = 0;
    for (int i = 0; i < nums; i++) {
        int temp;
        int nnum;
        scanf("%d", &nnum);
        int sumD = 0;
        temp = nnum;
        while (nnum != 0) {
            sumD += nnum % 10;
            nnum /= 10;
        }
        if (sumD > maxDig) {
            maxDig = sumD;
            maxNum = temp;
        } else if (sumD == maxDig) {
            if (temp > maxNum) {
                maxNum = temp;
            }
        }
    }

    printf("%d", maxNum);
    return 0;
}