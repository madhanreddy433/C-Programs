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

void print_ll()
{
    struct node *tmp = head;

    while(tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    return;
}

void reverse_print_ll(struct node *node)
{
    if(node != NULL)
    {
        reverse_print_ll(node->next);
        printf("%d ", node->data);
    }
    return;
}

void recursive_printz_ll(struct node *node)
{
    if(node != NULL)
    {
        printf("%d ", node->data);
        recursive_printz_ll(node->next);
    }
    return;
}
int main()
{
    int A[] = {1,2,3,4,5}, size;
    size = sizeof(A)/sizeof(A[0]);
    create_ll(A, size);
    print_ll();
    printf("\n");
    reverse_print_ll(head);
    printf("\n");
    recursive_printz_ll(head);
    printf("\n");
    return 0;
}