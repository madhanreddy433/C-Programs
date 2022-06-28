#include <stdio.h>

int main()
{
    int num = 2, result = 0;

    while(num>0)
    {
        if(num%2 != 0)
            result++;
        num = num/2;
    }
    //using bitwise 
    /*
    while(num>0)
    {
        if((num&1) == 1)
            result++;
        num = num>1;    //right shift
    }
    */

    printf("Number of set bits %d\n", result);

    return 0;
}