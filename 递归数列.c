#include <stdio.h>

double function(int n)
{
    if(n == 1) return 1;
    return 1.0 / (1.0 + function(n-1));
}

int main()
{
    printf("%.5lf", function(5));
    return 0;
}