#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    if(c*c==b*b+a*a)
    {
        printf("%d", a * b);
    }
    else
    {
        printf("no");
    }
}