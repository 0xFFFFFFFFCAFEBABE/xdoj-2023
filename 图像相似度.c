#include <stdio.h>#include <string.h>#include <stdlib.h>#include <stdbool.h>int main() {    int m,n;    int mat[101][101] = {0};    scanf("%d %d", &m, &n);    for(int i = 0;i<n;i++)    {        for (int j = 0; j < m; ++j) {            scanf("%d", &mat[i][j]);        }    }    int sum = 0;    for (int i = 0; i < n; ++i) {        for (int j = 0; j < m; ++j) {            int temp;            scanf("%d", &temp);            if(temp == mat[i][j])            {                sum++;            }        }    }    printf("%.2lf", 100 * (double)sum / (double)m/(double)n);    return 0;}