#include <stdio.h>#include <string.h>#include <stdlib.h>#include <stdbool.h>int main() {    char mat[22][22] = {0};    int n,m,c;    scanf("%d %d %d", &n,&m,&c);    for(int i = 0; i < n;i++)    {        for(int j = 0;j<m;j++)        {            char temp;            scanf("%c", &temp);            while (temp == '\n')            {                scanf("%c", &temp);            }            mat[i+1][j+1] = temp;        }    }    int steps = 0;    int x = c - 1;    int y = 0;    while(mat[y + 1][x + 1] != 0)    {        bool flag = false;        steps++;        switch (mat[y + 1][x + 1]) {            case 'N':                mat[y + 1][x + 1] = 0;                y--;                break;            case 'S':                mat[y + 1][x + 1] = 0;                y++;                break;            case 'E':                mat[y + 1][x + 1] = 0;                x++;                break;            case 'W':                mat[y + 1][x + 1] = 0;                x--;                break;            default:                flag = true;                break;        }        if(flag)        {            break;        }    }    if(x >= 0 && y >= 0 && x < m && y < n)    {        printf("loop %d", steps);    }    else    {        printf("out %d", steps);    }    return 0;}