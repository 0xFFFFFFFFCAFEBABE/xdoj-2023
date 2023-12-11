#include <stdio.h>

int main() {
    int input;
    scanf("%d", &input);
    int sum = 0;
    sum += input % 10;
    input/=10;
    sum += input % 10;
    input /=10;
    sum += input % 10;
    printf("%d", sum);
    return 0;
}