#include <stdio.h>

int main()
{
    int A[] = {0,1,2,3,4,5,6}, i, index, len;

    printf("enter the index at which element should be deleted: ");
    scanf("%d", &index);

    len = sizeof(A)/sizeof(A[0]);
    for(i=index; i<len; i++)
    {
        A[i] = A[i+1];
    }
    len--;

    for(i=0;i<len;i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}