#include <stdio.h>

int main() {
    for(int i = 0;i < 26;i++)
    {
        printf("%c", 'a' + i);
        if(i != 25)
        {
            printf(" ");
        }
    }

    printf("\n");
    for(int i = 0; i< 26;i++)
    {
        printf("%c", 'z' - i );
        if(i != 25)
        {
            printf(" ");
        }
    }
}