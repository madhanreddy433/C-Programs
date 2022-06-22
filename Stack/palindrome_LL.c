#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

void create_ll(int *A, int size){
    int i;

    if(top == NULL)
    {
        struct node *last, *new = (struct node *)malloc(sizeof(struct node));
        new->data = A[0];
        new->next = NULL;

        top = new;
        last = top;

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
        struct node *last = top;
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

void push(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    if(top == NULL)
    {
        top = new;
        return;
    }

    new->next = top;
    top = new;

    return;
}

void pop()
{
    int data;
    if(top == NULL)
    {
        printf("Stack is Empty\n");
    }

    struct node *tmp;
    tmp = top;
    top = tmp->next;
    free(tmp);

    return;
}

int top_element()
{
    if(top == NULL)
    {
        printf("Stack is empty\n");
    }
    return top->data;
}

void print()
{
    if(top == NULL)
    {
        printf("stack is empty\n");
        return;
    }

    struct node *tmp = top;
    while(tmp != NULL)
    {
        printf("%d ", tmp->data);
        tmp = tmp->next;
    }

    printf("\n");

    return;
}

bool is_palindrome()
{
    struct node *tmp1 = top, *tmp2 = top;

    while(tmp1 != NULL)
    {
        push(tmp1->data);
        tmp1 = tmp1->next;
    }

    while(tmp2 != NULL)
    {
        if(tmp2->data != top_element())
           return false;
        tmp2 = tmp2->next; 
        pop();       
    }
    return true;
}
int main()
{
    int A[] = {1, 2, 1, 3};

    create_ll(A, sizeof(A)/sizeof(A[0]));

    if(is_palindrome())
    {
        printf("Given Linked List is Palindrome\n");
    }
    else
    {
        printf("Given Linked List is not Palindrome\n");
    }

    return 0;
}