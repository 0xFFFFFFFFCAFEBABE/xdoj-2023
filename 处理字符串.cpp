#include<stdio.h>
#include <cctype>
#include <cstring>

#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    char buf[256];
    gets(buf);
    std::vector<char> p1;
    std::vector<char> p2;

    size_t len = strlen(buf);
    if (len == 0) {
        printf("");
        return 0;
    }
    char a = buf[0];

    for (int i = 1; i < len; ++i) {
        if (buf[i] > a) {
            p1.push_back(buf[i]);
        } else {
            p2.push_back(buf[i]);
        }
    }

    //sort p2
    std::sort(p2.begin(), p2.end());
    for (int i = 0; i < p1.size(); ++i) {
        std::cout << p1[i];
    }
    std::cout << a;
    for (int i = 0; i < p2.size(); ++i) {
        std::cout << p2[i];
    }

    std::cout << std::endl;

    return 0;
}
