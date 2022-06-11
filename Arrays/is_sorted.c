#include <stdio.h>

int main()
{
    int A[] = {1,2,3,4,5,3}, len, i;

    len = sizeof(A)/sizeof(A[0]);

    for(i=0;i<len-1;i++)
    {
        if(A[i] > A[i+1])
        {
            printf("Array is not sorted\n");
            return 0;
        }
    }
    printf("Array is sorted\n");
    return 0;
}