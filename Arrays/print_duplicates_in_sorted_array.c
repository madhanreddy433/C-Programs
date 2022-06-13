#include <stdio.h>

int main()
{
    int A[] = {1,2,3,3,4,5,5,5,6,7}, i, len, last_duplicate = 0;
    len = sizeof(A)/sizeof(A[0]);

    for(i=0;i<len;i++)
    {
        if(A[i] == A[i+1])
        {
            if(A[i] == last_duplicate)
            {
                continue;
            }
            else
            {
                printf("%d ", A[i]);
                last_duplicate = A[i];
            }
        }
    }
    printf("\n");
    return 0;
}