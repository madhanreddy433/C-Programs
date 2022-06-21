#include <stdio.h>
#include <stdlib.h>

int max_element(int A[], int len)
{
    int i, max = A[0];
    for(i=0;i<len;i++)
    {
        if(A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

int main()
{
    int A[] = {1,2,1,4,3,5,7,6,3,2}, i, len, max;

    len = sizeof(A)/sizeof(A[0]);

    max = max_element(A, len);

    int *H = (int *)malloc(max*sizeof(int));

    for(i=0;i<len;i++)
    {
        H[i] = 0;
    }

    for(i=0;i<len;i++)
    {
        H[A[i]]++;
    }

    for(i=0;i<max;i++)
    {
        if(H[i] > 1)
        {
            printf("%d is repeated %d times\n", i, H[i]);
        }
    }

    return 0;
}