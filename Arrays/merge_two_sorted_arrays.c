#include <stdio.h>

int main()
{
    int A[5] = {1,3,5,7,9}, B[5] = {2,4,6,8,10};
    int C[10] = {0}; //to store merged array
    int i=0, j=0, k=0;

    while(i<5 && j<5)
    {
        if(A[i] < B[j]){
            C[k++] = A[i++];
        }
        else
        {
            C[k++] = B[j++];
        }
    }
    //move the remaining elements to merged array
    for(;i<5;i++)
    {
        C[k++] = A[i++];
    }
    for(;j<5;j++)
    {
        C[k++] = B[j++];
    }

    printf("merged array is: ");
    for(i=0;i<k;i++)
    {
        printf("%d ", C[i]);
    }
    printf("\n");
    
    return 0;
}