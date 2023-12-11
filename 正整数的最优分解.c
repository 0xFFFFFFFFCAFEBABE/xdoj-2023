#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int factor[100] = {0};
    int factors = 0;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 20; i >= 1; --i) {
        int now = (int) pow(2.0,(double)i);
        if(sum + now > n)
        {
            continue;
        }
        else
        {
           sum += now;
           factor[factors] = now;
           factors++;
        }
    }
    if(sum == n)
    {
        for (int i = 0; i < factors; ++i) {
            printf("%d", factor[i]);
            if (i != factors - 1) {
                printf(" ");
            }
        }
    }
    else
    {
        printf("-1");
    }
    return 0;
}
