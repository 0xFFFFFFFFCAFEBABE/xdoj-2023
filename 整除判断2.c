#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if(n % 5 == 0 && n % 7 == 0)
    {
        printf("yes");
    } else{
        printf("no");
    }
    return 0;
}