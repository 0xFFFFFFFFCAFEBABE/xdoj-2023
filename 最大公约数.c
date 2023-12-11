#include <stdio.h>
#include <minmax.h>

int myGCD(int a, int b)
{
    while (a > 1 && b > 1)
    {
        if(a > b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }
    if(min(a,b) == 0)
    {
        return max(a,b);
    }
    else
    {
        return min(a,b);
    }
}

int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    printf("%d", myGCD(a, b));
    return 0;
}