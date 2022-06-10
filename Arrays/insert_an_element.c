#include <stdio.h>
 
int main()
{
    int arr[] = { 1,2,3,4,5,6};
    int i, x, pos, n;
 
    n = sizeof(arr)/sizeof(arr[0]);

    // print the original array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    // element to be inserted
    x = 50;
 
    // position at which element
    // is to be inserted
    pos = 5;
 
    //check the valid index/position
    if(pos >= 0 && pos <= n)
    {
        // increase the size by 1
        n++;
 
        // shift elements forward
        for (i = n-1; i >= pos; i--)
            arr[i] = arr[i - 1];
 
        // insert x at pos
        arr[pos - 1] = x;
    }
 
    // print the updated array
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}