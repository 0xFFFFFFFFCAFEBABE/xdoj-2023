#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double avg = 0;
    for(int i = 0;i < n;i++)
    {
        int input;
        scanf("%d", &input);
        avg += (double)input / n;
    }

    printf("%.2f", avg);
    return 0;
}