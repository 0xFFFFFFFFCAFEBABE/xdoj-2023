#include <stdio.h>

#define MAX 10

int used[MAX];
int result[MAX];

void permutations(int n, int index) {
    if (index == n) {
        for (int i = 0; i < n; i++) {
            printf("%d ", result[i]);
        }
        printf("\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (!used[i]) {
            used[i] = 1;
            result[index] = i;
            permutations(n, index + 1);
            used[i] = 0;
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    permutations(n, 0);

    return 0;
}
