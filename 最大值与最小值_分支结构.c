#include <stdio.h>
#include <math.h>
#define swap(a,b) a^=b;b^=a;a^=b;
int main() {
    int a,b;
    scanf("%d %d", &a, &b);
    int results[4];
    results[0] = (a+b)*(a+b);
    results[1] = (a-b)*(a-b);
    results[2] = a*a + b*b;
    results[3] = a*a - b*b;
    for(int i = 0; i<4 - 1;i++)
    {
        for(int j = 0;j<4 - 1 - i;j ++)
        {
            if(results[j] < results[j + 1])
            {
                swap(results[j], results[j+1]);
            }
        }
    }
    printf("%d %d", results[0], results[3]);
    return 0;
}
