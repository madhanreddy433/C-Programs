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
int count_nodes()
{
    int no_nodes = 0;
    struct node *tmp = head;

    while(tmp != NULL)
    {
        no_nodes++;
        tmp = tmp->next;
    }

    return no_nodes;
}

int recursive_count(struct node *node)
{
    if(node == NULL)
    {
        return 0;
    }

    return recursive_count(node->next) + 1;
}
int main()
{
    int A[] = {1,2,3,4,5}, size;
    size = sizeof(A)/sizeof(A[0]);
    create_ll(A, size);

    printf("number of nodes iterative method: %d\n", count_nodes());
    printf("number of nodes recursive method: %d\n", recursive_count(head));
    return 0;
}