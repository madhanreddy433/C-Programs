#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

struct node *H[10];

void init()
{
    int i;
    for(i=0;i<10;i++)
    {
        H[i] = NULL;
    }
    return;
}

int hash_func(int key)
{
    return key%10;
}

void insert(int key)
{
    //create a node and fill data
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = key;
    new->next = NULL;

    //get the index from hash function
    int index = hash_func(key);
    
    //insert into hash 

    //check if the H[index] is empty
    if(H[index] == NULL)
    {
        H[index] = new;
    }
    else    //collision
    {
        //add the node at the end of the H[index]
        struct node *tmp = H[index];
        while(tmp->next != NULL)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
    }
    return;
}

void print()
{
    int i;

    for(i=0;i<10;i++)
    {
        struct node *tmp = H[i];
        printf("H[%d]-->", i);
        while(tmp != NULL)
        {
            printf("%d -->", tmp->data);
            tmp = tmp->next;
        }
        printf("NULL\n");
    }
    return;
}
int main()
{
    init();

    insert(7);
    insert(12);
    insert(32);
    insert(23);
    insert(33);

    print();
    return 0;
}