#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

bool is_sorted()
{
    struct node *p = head, *q = NULL;
    q = p;
    p = p->next;
    while(p != NULL)
    {
        if(p->data < q->data)
            return false;
        p = p->next;
        q = q->next;
    }
    return true;
}
void print()
{
    struct node *tmp = head;
    while(tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }
    return;
}
int main()
{
    int A[] = {1,2,3,4,5,8, 0}, size;
    size = sizeof(A)/sizeof(A[0]);
    create_ll(A, size);

    if(is_sorted())
    {
        printf("Linked List is sorted\n");
    }
    else
    {
        printf("Linked List is not sorted\n");
    }
    return 0;
}