#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int count = 0;
    while (n != 1)
    {
        count++;
        if(n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }

    printf("%d", count);
    return 0;
}