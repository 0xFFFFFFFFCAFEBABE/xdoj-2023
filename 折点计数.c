#include <stdio.h>
#include <math.h>

int main()
{
    int days;
    scanf("%d", &days);
    int last2 = -1;
    int last = -1;
    int counter = 0;
    for(int i = 0;i < days;i ++)
    {
        int now;
        scanf("%d", &now);
        if(last2 == -1)
        {
            last2 = now;
        }
        else if(last == -1)
        {
            last = now;
        }
        else
        {
            if(now >= last && last >= last2)
            {
                last2 = last;
                last = now;
                continue;
            }
            else if(now <= last && last <= last2)
            {
               last2 = last;
               last = now;
               continue;
            }
            counter ++;
            last2 = last;
            last = now;
        }
    }

    printf("%d", counter);
    return 0;
}