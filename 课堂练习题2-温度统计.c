#include <stdio.h>
#include <minmax.h>

int main() {
    int days;
    scanf("%d", &days);
    double avg = 0;
    double maxi;
    double mini;
    for (int i = 0; i < days; i++) {
        int temp;
        scanf("%d", &temp);
        double cvt = 9.0 / 5.0 * temp + 32.0;
        if (i == 0) {
            maxi = cvt;
            mini = cvt;
        } else {
            maxi = max(cvt, maxi);
            mini = min(cvt, mini);
        }
        avg += cvt / days;
        printf("%.1lf", cvt);
        if (i != days - 1) {
            printf(" ");
            if ((i + 1) % 5 == 0) {
                printf("\n");
            }
        } else {
            printf("\n");
        }
    }

    printf("%.1lf", mini);
    printf(" %.1lf", maxi);
    printf(" %.1lf", avg);
    return 0;


    return 0;
}
