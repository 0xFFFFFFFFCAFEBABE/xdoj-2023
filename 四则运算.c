#include <stdio.h>

int main() {
    int left, right;
    char op;
    scanf("%d%c%d", &left, &op, &right);
    int result;
    switch (op) {
        case '+':
            result = left + right;
            break;
        case '-':
            result = left - right;
            break;
        case '*':
            result = left * right;
            break;
        case '/':
            result = left / right;
            break;
        case '%':
            result = left % right;
            break;
        default:
            return -1;
    }

    printf("%d%c%d=%d", left, op, right, result);
    return 0;
}