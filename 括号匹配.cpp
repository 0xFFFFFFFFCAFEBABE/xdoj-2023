#include<stdio.h>
#include <stack>
#include <cstring>


bool check(char i) {
    return (i == '{' || i == '(' || i == '[' ||
            i == '}' || i == ')' || i == ']');
}

int main() {
    std::stack<char> match;
    char buf[256];
    gets(buf);
    size_t len = strlen(buf);
    bool flag = true;
    for (int i = 0; i < len; ++i) {
        char curr = buf[i];
        if (!check(curr)) {
            continue;
        }
        if (curr == '(' || curr == '{' || curr == '[') {
            match.push(curr);
            continue;
        }
        if (curr == '}' || curr == ')' || curr == ']') {
            if (match.empty()) {
                flag = false;
                break;
            }
            flag &= ((curr == '}' && match.top() == '{')
                     || (curr == ']' && match.top() == '[') || (curr == ')' && match.top() == '('));
            match.pop();
        }
    }


    flag &= match.empty();
    if (!flag) {
        printf("no");
    } else {
        printf("yes");
    }

    return 0;
}
