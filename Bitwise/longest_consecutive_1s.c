#include <stdio.h>

int main()
{
    int num = 11, len = 0, ans = 0, tmp;
    tmp = num;
    while(tmp > 0)
    {
        if((tmp&1) == 1)
        {
            len++;
            tmp = tmp>>1;
        }
        else
        {
            tmp = tmp>>1;
        }

        if(len > ans)
            ans = len;
        else
            len = 0;
    }

    printf("ans: %d\n", ans);
    return 0;
}