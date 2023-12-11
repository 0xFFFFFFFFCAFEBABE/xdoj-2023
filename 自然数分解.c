#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prod = n * n * n;
    int a = (prod + n - n*n) / n;
    int counter = 0;
    while (counter < n)
    {
        printf("%d ", a + counter * 2);
        counter ++;
    }
    return 0;
}