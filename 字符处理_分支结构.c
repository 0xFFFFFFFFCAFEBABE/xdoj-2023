#include <stdio.h>
#include <string.h>
#include <minmax.h>

int main() {
    char c;
    scanf("%c", &c);
    if(c >= 'a' && c <= 'z')
    {
        c = c - 'a' + 'A';
    } else if(c >= 'A' && c <= 'Z')
    {
        c = c - 'A' + 'a';
    }
    else
    {
        c = c;
    }

    printf("%c", c);
    return 0;
}