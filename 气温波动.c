#include <stdio.h>
#include <math.h>

int main()
{
    int days;
    int temper[30];
    scanf("%d", &days);
    int differ = 0;
    int last = 100;
    for(int i = 0;i < days;i ++)
    {
        int tem;
        scanf("%d", &tem);
        if(last == 100)
        {
            last = tem;
        }
        else
        {
            int co = abs(last - tem);
            differ = differ > co ? differ : co;
            last = tem;
        }
    }

    printf("%d", differ);
    return 0;
}