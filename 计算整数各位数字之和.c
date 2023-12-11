#include <stdio.h>

int main() {
    int sum = 0;
    int input;
    scanf("%d", &input);
    while (input != 0)
    {
       sum += input % 10;
       input /= 10;
    }

    printf("%d", sum);
    return 0;
}