#include <stdio.h>

int main() {
    int sum = 0;
    char input[5];
    scanf("%c %c %c %c %c", &input[0], &input[1], &input[2], &input[3], &input[4]);
    for(int i = 0; i<5;i++)
    {
        if(input[i] == 'a' || input[i] == 'A')
        {
            sum++;
        }
    }
    printf("%d", sum);
    return 0;
}