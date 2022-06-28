#include <stdio.h>
#include <stdbool.h>

bool is_power_of_two(int n)
{
    if(n == 0)
        return false;
    while(n != 1)
    {
        if(n%2 != 0)
            return false;
        n = n/2;
    }
    return true;
}

int main()
{
    int n = 16;

    if(is_power_of_two(n))
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}