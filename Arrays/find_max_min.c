#include <stdio.h>

int main()
{
    int A[] = {2,1,4,3,6,5,2,3}, i, max, min, len;

    max = A[0]; min = A[0];
    len = sizeof(A)/sizeof(A[0]);

    for(i=0;i<len;i++)
    {
        if(A[i] < min)
        {
            min = A[i];
        }
        else if (A[i] > max)
        {
            max = A[i];
        }
    }
    printf("min: %d max: %d\n", min, max);

    return 0;
}