#include <stdio.h>

int main()
{
    int A[] = {1,2,3,4,5,6}, i, len, tmp;
    len = sizeof(A)/sizeof(A[0]);

    tmp = A[0];
    for(i=0;i<len-1;i++)
    {
        A[i] = A[i+1];
    }
    A[i] = tmp;

    printf("Array after left shitf: ");
    for(i=0;i<len;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}