#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int an[31];
    int bn[31];
    an[1] = 2;
    an[2] = 3;
    bn[1] = 1;
    bn[2] = 2;
    for (int i = 3; i <= 30; i++) {
        an[i] = an[i - 1] + an[i - 2];
        bn[i] = bn[i - 1] + bn[i - 2];
    }


    double sum = 0;
    for(int i = 1; i<=n;i++)
    {
        sum +=((double) an[i] / (double) bn[i]);
    }
    printf("%.2lf", sum);
    return 0;
}