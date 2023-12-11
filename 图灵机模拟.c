#include <stdio.h>
#include <string.h>

struct insn {
    char curState[21];
    char curSymbol[2];
    char newSymbol[2];
    char to[2]; // L R N
    char newState[21];
};


struct insn insns[100];
int n;

struct insn *FindNextInsn(char nowState[], char nowSym) {
    for (int i = 0; i < n; i++) {
        if (strcmp(insns[i].curState, nowState) == 0 &&
            (insns[i].curSymbol[0] == '*' || insns[i].curSymbol[0] == nowSym)) {
            return &insns[i];
        }
    }
    return NULL;
}


int main() {
    char storage[1000] = {0};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", insns[i].curState);
        scanf("%s", insns[i].curSymbol);
        scanf("%s", insns[i].newSymbol);
        scanf("%s", insns[i].to);
        scanf("%s", insns[i].newState);
    }

    scanf("%s", storage);


    int index = 0;
    int len = strlen(storage);
    char now_state[21] = "INIT";
    index = strstr(storage, "#*") - storage + 1;
    int output = index;

    while (strcmp(now_state, "STOP")) {
        struct insn *curInsn = FindNextInsn(now_state, storage[index]);
        if (curInsn == NULL) {
            break;
        }

        storage[index] = curInsn->newSymbol[0];
        strcpy(now_state, curInsn->newState);
        if (curInsn->to[0] == 'L') {
            index--;
        } else if (curInsn->to[0] == 'R') {
            index++;
        }
    }
    len = strlen(storage);
    for (int i = 0; i < len; i++) {
        if (storage[i] != '*' && storage[i] != '#') {
            printf("%c", storage[i]);
        }
    }
    return 0;
}