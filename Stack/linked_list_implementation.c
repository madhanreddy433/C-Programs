#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *top = NULL;

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
    if(top == NULL)
    {
        printf("Stack is Empty\n");
        return;
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
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        push(i+1);
    }

    printf("original Stack is: ");
    print();
    pop();
    printf("stack after pop: ");
    print();

    return 0;
}