#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool isPrime(int num)
{
    if(num == 2 || num == 3)
    {
        return true;
    }
    for(int i = 2; i<= sqrt((double)num) + 1;i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    scanf("%d", &n);
    if(isPrime(n))
    {
        printf("YES");
    } else{
        printf("NO");
    }
    return 0;
}