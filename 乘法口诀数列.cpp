#include<stdio.h>
#include <cctype>
#include <cstring>

#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> a;
    int a1, a2, n;
    std::cin >> a1 >> a2 >> n;
    int l = 0, r = 1;
    a.push_back(a1);
    a.push_back(a2);
    while (r <= n) {
        int prod = a[l] * a[r];
        if (prod < 10) {
            a.push_back(prod);
        } else {
            a.push_back(prod / 10);
            a.push_back(prod % 10);
        }
        l++, r++;
    }
    for (int i = 0; i < n; ++i) {
        printf("%d ", a[i]);
    }
    return 0;
}
