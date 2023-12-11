#include <stdio.h>
#include <stdbool.h>

char s[20][20];
int n;

void init() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            s[i][j] = '.';
        }
    }
}

bool check() {
    for (int i = 0; i < n; i++) {
        bool lineQueen = false;
        for (int j = 0; j < n; ++j) {
            if (s[i][j] == 'Q') {
                if (lineQueen) return false;
                lineQueen = true;
                if (i + 1 <= n - 1 && j + 1 <= n - 1 && s[i + 1][j + 1] == 'Q') return false;
                if (i - 1 >= 0 && j - 1 >= 0 && s[i - 1][j - 1] == 'Q') return false;
                if (i + 1 <= n - 1 && j - 1 >= 0 && s[i + 1][j - 1] == 'Q') return false;
                if (j + 1 <= n - 1 && i - 1 >= 0 && s[i - 1][j + 1] == 'Q') return false;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        bool colQueen = false;
        for (int j = 0; j < n; ++j) {
            if(s[j][i] == 'Q')
            {
               if(colQueen) return false;
               colQueen = true;
            }
        }
    }

    return true;
}

void solveQueen(int line) {
    if (line == n) {
        return;
    }

    for (int i = 0; i < n; i++) {
        s[line][i] = 'Q';
        if (check()) {
            return solveQueen(line + 1);
        }
        s[line][i] = '.';
    }

}

void printIt() {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%c ", s[i][j]);
        }

        printf("\n");
    }
}

int main() {
    scanf("%d", &n);
    init();
    solveQueen(0);
    printIt();

    return 0;
}