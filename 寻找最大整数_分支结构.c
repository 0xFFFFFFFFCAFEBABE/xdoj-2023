#include <stdio.h>
#include <string.h>
#include <minmax.h>

int main() {
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d",max(a,max(b,max(c,d))));
    return 0;
}