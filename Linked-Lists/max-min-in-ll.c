#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node 
{
    int data;
    struct node *next;
}*head = NULL;

void create_ll(int *A, int n){
    int i;
    struct node *new, *last;
    if(head == NULL)
    {
        head = (struct node*)malloc(sizeof(struct node));
        head->data = A[0];
        head->next = NULL;
        last = head;

        for(i=1;i<n;i++)
        {
            new = (struct node*)malloc(sizeof(struct node));
            new->data = A[i];
            new->next = NULL;
            last->next = new;
            last = new;
        }
    }
    else{
        //todo
    }
    return;
}
int max()
{
    int max = INT_MIN;
    struct node *tmp = head;

    while(tmp != NULL)
    {
        if(tmp->data > max)
        {
            max = tmp->data;
        }
        tmp = tmp->next;
    }

    return max;
}

int min()
{
    struct node *tmp = head;
    int min = INT_MAX;
    if(tmp->data < min)
    {
        min = tmp->data;
    }
    tmp = tmp->next;

    return min;
}

int main()
{
    int A[] = {1,2,3,4,5,8}, size;
    size = sizeof(A)/sizeof(A[0]);
    create_ll(A, size);

    printf("min: %d\nmax: %d\n", min(), max());
    return 0;
}