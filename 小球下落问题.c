#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    double S = 100;
    double h = 50;
    for(int i = 1;i < n;i++)
    {
        S += h*2;
        h /= 2;
    }

    printf("S=%.3f h=%.3f", S, h);
    return 0;
}