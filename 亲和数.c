#include <stdio.h>

int getResult(int num, int* gcds)
{
    int sum = 0;
    for(int i = 1;i<=num / 2 + 1;i++)
    {
       if(num % i == 0)
       {
           (*gcds)++;
           sum += i;
       }
    }
    return sum;
}
int main() {
    int m,n ;
    scanf("%d %d", &m, &n);
    int ret1 = 0;
    int sum = getResult(m, &ret1);
    int ret2 = 0;
    int sum2 = getResult(n, &ret2);
    if(sum == n && sum2 == m)
    {
        printf("yes %d %d", ret1, ret2);
    }
    else
    {
        printf("no %d %d", ret1, ret2);
    }
    return 0;
}
