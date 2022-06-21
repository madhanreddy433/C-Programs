#include <stdio.h>

int main()
{
    int A[] = {1,4,2,3,5,3,1,2,2,2}, i, j, len, count;
    len = sizeof(A)/sizeof(A[0]);

    for(i=0;i<len-1;i++)
    {
        count = 1;
        if(A[i] != -1)
        {
            for(j=i+1;j<len;j++)
            {
                if(A[i] == A[j])
                {
                    count++;
                    A[j] = -1;
                }
            }
            if(count > 1)
            {
                printf("%d is repeated %d times\n", A[i], count);
            }
        }
    }
    return 0;
}