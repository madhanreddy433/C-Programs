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

void insert(int data, int position)
{
    struct node *new, *tmp;
    if(position == 0)
    {
        new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = NULL;
        new->next = head;
        head = new;
    }
    else if(position > 0)
    {
        tmp = head;
        int i;
        for(i=0;i<position-1 && tmp; i++)
        {
            tmp = tmp->next;
        }
        new = (struct node *)malloc(sizeof(struct node));
        new->data = data;
        new->next = tmp->next;
        tmp->next = new;
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
    return;
}
int main()
{
    int A[] = {1,2,3,4,5,8}, size;
    size = sizeof(A)/sizeof(A[0]);
    create_ll(A, size);
    print();
    printf("\n");
    insert(0, 3);
    print();
    printf("\n");
    return 0;
}