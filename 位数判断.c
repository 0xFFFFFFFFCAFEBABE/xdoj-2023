#include <stdio.h>

int main() {
    int i;
    scanf("%d", &i);
    int n = 0;
    if(i == 0)
    {
        printf("%d", 1);
        return 0;
    }
    while(i != 0)
    {
        n ++;
        i /= 10;
    }
    printf("%d", n);
    return 0;
}
