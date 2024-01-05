#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);

    char name[14];
    int id;
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        char ln[14];
        int t1, a, b, c;
        scanf("%d %s %d %d %d", &t1, ln, &a, &b, &c);
        int d = a + b + c;
        if (d > sum) {
            sum = d;
            id = t1;
            strcpy(name, ln);
        }
    }

    printf("%s %d %d", name, id, sum);
    return 0;
}