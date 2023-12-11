#include <stdio.h>
#include <math.h>
#include <minmax.h>

int main() {
    int n;
    scanf("%d", &n);
    int apples;
    scanf("%d", &apples);
    int maxi = 0;
    int co = 0;
    for (int i = 0; i < n; i++) {
        int this_;
        scanf("%d", &this_);
        apples += this_;
        if(maxi <= -this_)
        {
           maxi = -this_;
           co = i+1;
        }
    }

    printf("%d %d", apples, co);
    return 0;

}