#include <stdio.h>
#include <stdbool.h>

int main() {
    int nums;
    scanf("%d", &nums);

    for(int i = 0;i < nums; i++)
    {
        int temp;
        scanf("%d", &temp);
        int f = temp*temp;
        int dv = temp;
        bool flag = true;
        while (dv != 0)
        {
            if(dv % 10 != f % 10)
            {
                flag = false;
                break;
            }
            f /= 10;
            dv /= 10;
        }

        if(flag)
        {
            printf("%d\n", temp);
        }
        else
        {
            printf("no\n");
        }
    }
    return 0;
}