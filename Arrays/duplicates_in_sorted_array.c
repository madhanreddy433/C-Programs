#include <stdio.h>

int main()
{
    int A[] = {1,2,3,4,4,5,6,6,6,6,7}, i, len, j;
    len = sizeof(A)/sizeof(A[0]);

    for(i=0;i<len-1;i++)
    {
        if(A[i] == A[i+1])
        {
            j = i + 1;
            while(A[i] == A[j])
            {
                j++;
            }
            printf("%d is repeated %d times\n", A[i], j-i);
            i = j -1;
        }
    }
    return 0;
}