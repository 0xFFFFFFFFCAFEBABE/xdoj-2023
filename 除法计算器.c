#include <stdio.h>

int main() {
    int m,n,q,r;
    scanf("%d %d %d %d", &m, &n, &q, &r);
    if(m / n == q && m % n == r)
    {
        printf("yes");
        return 0;
    }
    printf("%d %d", m / n, m % n);
    return 0;
}