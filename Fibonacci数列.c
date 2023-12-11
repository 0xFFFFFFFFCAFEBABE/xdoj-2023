#include <stdio.h>

int fib(int n)
{
    if(n == 0) return 7;
    if(n == 1) return 11;
    return fib(n - 1) + fib(n-2);
}

int main() {
    printf("%d", fib(40));
    return 0;
}