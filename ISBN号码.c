#include <stdio.h>
#include <string.h>


int main() {
    char is[10];
    char ns[12];
    scanf("%c-%c%c%c-%c%c%c%c%c-%c", is, is + 1, is + 2, is + 3, is + 4, is + 5, is + 6, is + 7, is + 8, is + 9);
    ns[0] = is[0];
    ns[1] = '-';
    ns[2] = is[1];
    ns[3] = is[2];
    ns[4] = is[3];
    ns[5] = '-';
    ns[6] = is[4];
    ns[7] = is[5];
    ns[8] = is[6];
    ns[9] = is[7];
    ns[10] = is[8];
    ns[11] = '-';
    int crc = 0;
    for(int i = 0;i<9;i++)
    {
        crc += (is[i]^0x30) * (i+1);
    }
    crc %= 11;
    if(crc == 10)
    {
        if(is[9] == 'X')
        {
            printf("Right");
            return 0;
        }
        else
        {
            for(int i = 0;i<12;i++)
            {
                printf("%c", ns[i]);
            }
            printf("X");
            return 0;
        }
    }
    if((is[9] ^ 0x30) == crc)
    {
        printf("Right");
    }
    else
    {
        for(int i = 0;i<12;i++)
        {
            printf("%c", ns[i]);
        }
        printf("%c", crc ^ 0x30);
    }
    return 0;
}