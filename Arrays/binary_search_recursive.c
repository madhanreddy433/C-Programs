#include <stdio.h>
#include <stdbool.h>

bool bst(int A[], int low, int high, int key)
{
    int mid;
    while(low <= high)
    {
        mid = (low+high)/2;
        if(A[mid] == key)
        {
            return true;
        }
        else if(key < A[mid])
        {
            return bst(A, low, mid-1, key);
        }
        else
        {
            return bst(A, mid+1, high, key);
        }
    }
    return false;
}

int main()
{
    int A[] = {1,2,3,4,5,6,7}, low, high, key;

    //key to search
    key = 10;

    low = 0;
    high = sizeof(A)/sizeof(A[0]) - 1;
    if(bst(A, 0, high, key))
    {
        printf("key found\n");
    }
    else
    {
        printf("key not found\n");
    }
    return 0;
}