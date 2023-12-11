#include<stdio.h>
#include <math.h>

int main() {
    int N;
    scanf("%d", &N);
    int num_3 = 0;
    int num_2 = 0;
    num_3 = N / 3;
    num_2 = (N - 3 * num_3) / 2;
    if (N == 2) {
        printf("1");
        return 0;
    }else if(N == 3)
    {
        printf("2");
        return 0;
    }
    else if(N == 4)
    {
        printf("4");
        return 0;
    }
    printf("%d", (int) pow(3.0, (double) num_3) * (int) pow(2.0, (double) num_2));
    return 0;
}