
struct node
{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root = NULL;

void preorder_recursive(struct node *tmp)
{
    if(tmp != NULL)
    {
        printf("%d ", tmp->data);
        preorder_recursive(tmp->lchild);
        preorder_recursive(tmp->rchild);
    }
    return;
}

void preorder_iterative(struct node *tmp)
{
    struct stack st;
    while(tmp != NULL || !isEmpty(st))
    {
        if(tmp != NULL)
        {
            printf("%d ", tmp->data);
            push(&st, tmp);
            tmp = tmp->lchild;
        }
        else
        {
            tmp = pop(&st);
            tmp = tmp->rchild;
        }
    }
    return;
}

void inorder_recursive(struct node *tmp)
{
    if(tmp != NULL)
    {
        inorder_recursive(tmp->lchild);
        printf("%d ", tmp->data);
        inorder_recursive(tmp->rchild);
    }
    return;
}

void inorder_iterative(struct node *tmp)
{
    struct node st;
    while(tmp != NULL || !isEmpty(st))
    {
        if(tmp != NULL)
        {
            push(&st, tmp);
            tmp = tmp->lchild;
        }
        else
        {
            tmp = pop(&st);
            printf("%d ", tmp->data);
            tmp = tmp->rchild
        }
    }
    return;
}

int count_nodes(struct node *tmp)
{
    int x, y;
    if(tmp != NULL)
    {
        x = count_nodes(tmp->lchild);
        y = count_nodes(tmp->rchild);
        return x + y + 1;
    }
    return 0;
}

int sum_of_nodes(struct node *tmp)
{
    int x, y;
    if(tmp != NULL)
    {
        x = sum_of_nodes(tmp->lchild);
        y = sum_of_nodes(tmp->rchild);

        return x + y + tmp->data;
    }
    return 0;
}

int number_of_nodes_with_degree_2(struct node *tmp)
{
    int x, y;

    if(tmp != NULL)
    {
        x = number_of_nodes_with_degree_2(tmp->lchild);
        y = number_of_nodes_with_degree_2(tmp->rchild);

        if(tmp->lchild != NULL && tmp->rchild != NULL)
        {
            return x + y + 1;
        }
        else
        {
            return x + y;
        }
    }
    return 0;
}

int height(struct node *tmp)
{
    int x, y;
    if(tmp != NULL)
    {
        x = height(tmp->lchild);
        y = height(tmp->rchild);

        if(x>y)
        {
            return x + 1;
        }
        else
        {
            return y + 1;
        }
    }
    return 0;
}

void levelorder(struct node *tmp)
{
    queue q;
    printf("%d ", tmp->data);
    enqueue(&q, tmp);

    while(!isEmpty(q))
    {
        tmp = dequeue(&q);
        if(tmp->lchild)
        {
            printf("%d ", tmp->lchild->data);
            enqueue(&q, tmp->lchild);
        }
        if(tmp->rchild)
        {
            printf("%d ", tmp->rchild->data);
            enqueue(&q, tmp->rchild);
        }
    }
    return;
}