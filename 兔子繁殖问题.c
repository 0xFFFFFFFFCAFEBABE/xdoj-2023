#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long old = 0;
    long long new_ = 1;
    for (int i = 1; i < n; i++) {
        long long c = old;
        old += new_;
        new_ = c;
    }
    printf("%lld", old + new_);
    return 0;
}