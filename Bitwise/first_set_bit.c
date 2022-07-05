#include <stdio.h>

int PositionRightmostSetbit(int n)
{
      if(n == 0)
          return 0;
    // Position variable initialize with 1
    // m variable is used to check the set bit
    int position = 1;
    int m = 1;
 
    while (!(n & m)) {
 
        // left shift
        m = m << 1;
        position++;
    }
    return position;
}
int main()
{
    int num = 10;
    printf("Position of right most set bit in %d is %d\n", num, PositionRightmostSetbit(num));

    return 0;
}