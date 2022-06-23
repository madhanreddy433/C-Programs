#include <stdio.h>
#include <stdlib.h>

struct node 
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *insert(struct node *p, int key)
{
    struct node *new;
    if(p == NULL)
    {
        new = (struct node *)malloc(sizeof(struct node));
        new->data = key;
        new->left = new->right = NULL;
    }

    if(p->data < key)
    {
        p->left = insert(p->left, key);
    }
    else if (key > p->data)
    {
        p->right = insert(p->right, key);
    }

    return new;
}

int main()
{
    struct node *root = NNULL;

    root = insert(root, 30);
    insert(root, 20);
    insert(root, 25);

    return 0;
}