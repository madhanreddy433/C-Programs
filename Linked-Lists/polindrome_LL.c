#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *next;
}*head = NULL;

struct node *reverse_linked_list(struct node *node)
{
    struct node *prev = NULL, *current = node, *next = NULL;

    while(current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    node = prev;
    return node;
}
void create_ll(int *A, int size){
    int i;

    if(head == NULL)
    {
        struct node *last, *new = (struct node *)malloc(sizeof(struct node));
        new->data = A[0];
        new->next = NULL;

        head = new;
        last = head;

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
}

bool is_polindrome()
{
    struct node *slow = head, *fast = head, *rev = NULL;
    
    while(slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    //reverse the second half of Linked List
    rev = reverse_linked_list(fast->next);

    //compare first half and second half of elements
    slow = head;
    while(rev != NULL)
    {
        if(slow->data != rev->data)
            return false;
        slow = slow->next;
        rev = rev->next;
    }
    return true;
}

int main()
{
    int A[] = {1, 2, 3, 2, 1};

    create_ll(A, sizeof(A)/sizeof(A[0]));

    if(is_polindrome())
    {
        printf("Given Linked List is Polindrome\n");
    }
    else
    {
        printf("Given Linked List is NOT Polindrome\n");
    }
    return 0;
}