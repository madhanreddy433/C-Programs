#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*head = NULL;

void create_ll(int A[], int size)
{
    int i;

    if(head == NULL)
    {
        struct node *last, *new;
        //create new node and fill data
        new = (struct node *)malloc(sizeof(struct node));
        new->data = A[0];
        new->next = NULL;

        //link the nodes
        head = new;
        last = new;

        for(i=1;i<size;i++)
        {
            new = (struct node *)malloc(sizeof(struct node));
            new->data = A[i];
            new->next = NULL;

            last->next = new;
            last = new;
        }
    }
    else
    {
        struct node *last = head;
        while(last->next != NULL)
        {
            last = last->next;
        }
        for(i=0;i<size;i++)
        {
            struct node *new = (struct node*)malloc(sizeof(struct node));
            new->data = A[i];
            new->next = NULL;

            last->next = new;
            last = new;
        }
    }
    return;
}

void print()
{
    struct node *tmp = head;

    while(tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
    return;
}

void reverse_linked_list()
{
    struct node *prev = NULL, *current = head, *next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
    return;
}
int main()
{
    int A[] = {1,2,3,4,5,6};
    create_ll(A, sizeof(A)/sizeof(A[0]));

    print();
    reverse_linked_list();
    print();
}