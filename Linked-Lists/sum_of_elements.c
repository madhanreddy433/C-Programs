#include <stdio.h>
#include <stdlib.h>

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
int sum()
{
    int sum = 0;
    struct node *tmp = head;

    while(tmp != NULL)
    {
        sum += tmp->data;
        tmp = tmp->next;
    }

    return sum;
}

int recursive_sum(struct node *node)
{
    if(node == NULL)
    {
        return 0;
    }

    return recursive_sum(node->next) + node->data;
}
int main()
{
    int A[] = {1,2,3,4,5}, size;
    size = sizeof(A)/sizeof(A[0]);
    create_ll(A, size);

    printf("number of nodes iterative method: %d\n", sum());
    printf("number of nodes recursive method: %d\n", recursive_sum(head));
    return 0;
}