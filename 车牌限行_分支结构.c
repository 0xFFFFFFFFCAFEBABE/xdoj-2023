#include <stdio.h>
#include <stdbool.h>

int chePai;
void xianXing(bool shiFou)
{
   if(shiFou)
   {
       printf("%d yes", chePai % 10);
   }
   else
   {
       printf("%d no", chePai % 10);
   }
}

int main() {
    int week;
    int wuMai;
    scanf("%d %d %d", &week, &wuMai, &chePai);
    if(wuMai < 200 || week == 6 || week == 7)
    {
        xianXing(false);
        return 0;
    } else if(wuMai >= 200 && wuMai < 400)
    {
        int weiHao = chePai % 10;

        if(week == 1)
        {
            xianXing(weiHao == 1 || weiHao == 6);
            return 0;
        }


        if(week == 2)
        {
            xianXing(weiHao == 2 || weiHao == 7);
            return 0;
        }

        if(week == 3)
        {
            xianXing(weiHao == 3 || weiHao == 8);
            return 0;
        }

        if(week == 4)
        {
            xianXing(weiHao == 4 || weiHao == 9);
            return 0;
        }

        if(week == 5)
        {
            xianXing(weiHao == 5 || weiHao == 0);
            return 0;
        }

        xianXing(false);
        return 0;
    }
    else
    {
        int weiHao = chePai % 10;
        if(week == 1 || week == 3 || week == 5)
        {
            xianXing(weiHao % 2 != 0);
        }
        else
        {
            xianXing(weiHao % 2 == 0);
        }
    }
    return 0;
}