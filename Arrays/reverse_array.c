#include <stdio.h>

int main()
{
    int A[] = {1,2,3,4,5,6}, i, j, len, tmp;
    len = sizeof(A)/sizeof(A[0]);

    for(i=0,j=len-1; i<j; i++,j--)
    {
        //swap the elements
        tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }

    printf("Reverse Array is: ");
    for(i=0;i<len;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}