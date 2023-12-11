#include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 0; i< 3;i++)
    {
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d", sum);
    return 0;
}