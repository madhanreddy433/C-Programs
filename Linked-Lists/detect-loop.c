#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node *next;
}*head = NULL;

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

bool detect_loop()
{
    struct node *slow = head, *fast = head;

    while(fast && slow && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(fast == slow)
        {
            return true;
        }
    }
    return false;
}
// void print()
// {
//     struct node *tmp = head;
//     while(tmp != NULL)
//     {
//         printf("%d ", tmp->data);
//         tmp = tmp->next;
//     }
//     printf("\n");
//     return;
// }
int main()
{
    int A[] = {1, 2, 5, 1, 6};

    create_ll(A, sizeof(A)/sizeof(A[0]));

    //create a loop for testing
    head->next->next->next->next->next = head;

    if(detect_loop())
    {
        printf("loop present\n");
    }
    else
    {
        printf("no loop present\n");
    }

    return 0;
}