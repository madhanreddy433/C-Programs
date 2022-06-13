#include <stdio.h>

int main()
{
    int A[] = {2,3,4,7,6,8,10}, i, j, len, sum;

    len = sizeof(A)/sizeof(A[0]);
    sum = 8;

    for(i=0;i<len-1;i++)
    {
        for(j=i+1;j<len;j++)
        {
            if(sum == A[i] + A[j])
                printf("%d + %d = %d\n", A[i], A[j], A[i]+A[j]);
        }
    }

    //using hashing
    // int B[9] = {0};
    // for(i=0;i<len;i++)
    // {
    //     //B[A[i]] = 1;
    //     if(B[sum-A[i]] == 1)
    //         printf("%d + %d = %d\n", A[i], sum-A[i], sum);
    //     B[A[i]]++;
    // }

    return 0;
}