#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d", &a);
    int result = (int)sqrt((double)a);
    if(result * result == a)
    {
        printf("%d", result);
    }
    else
    {
        printf("no");
    }
    return 0;
}