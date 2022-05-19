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

void delete(int position)
{
    struct node *tmp1 = head, *tmp2;
    int i;
    for(i=0;i<position-1&&tmp1;i++)
    {
        tmp1 = tmp1->next;
    }
    tmp2 = tmp1->next;
    tmp1->next = tmp2->next;
    free(tmp2);
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
    int A[] = {1,2,3,4,5,8,0}, size;
    size = sizeof(A)/sizeof(A[0]);
    create_ll(A, size);

    print();
    delete(3);
    printf("\n");
    print();
    printf("\n");
    return 0;
}
