#include<stdio.h>
#include <stdlib.h>

int checkSum(int num) {
    int temp = num;
    int sum = 0;
    while (temp != 0) {
        sum += temp % 10;
        temp /= 10;
    }
    return sum;
}

int sort(const void *a, const void *b) {
    int suma = checkSum(*(int *) a);
    int sumb = checkSum(*(int *) b);
    if (suma > sumb) {
        return sumb - suma;
    } else if(suma == sumb){
        return *(int *) a - *(int *) b;
    }
}

int main() {
    int n;
    int inputs[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &inputs[i]);
    }
    qsort(inputs, n, sizeof(int), sort);

    for (int i = 0; i < n; i++) {
        printf("%d %d\n", inputs[i], checkSum(inputs[i]));
    }
    return 0;
}