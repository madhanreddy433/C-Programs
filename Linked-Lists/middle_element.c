#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*head = NULL;

int get_middle_element()
{
    struct node *slow = head, *fast = head;

    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow->data;
}

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

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6, 7};

    create_ll(A, sizeof(A)/sizeof(A[0]));

    printf("Middleelement is %d\n", get_middle_element());

    return 0;
}