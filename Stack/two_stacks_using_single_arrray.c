#include <stdio.h>
#include <stdlib.h>

int *array; //declaration of array type variable
int size;   //size of array
int top1;
int top2;

void push1(int data)
{
    //check the overflow condition
    if(top1 < top2-1)
    {
        top1++;
        array[top1] = data;
    }
    else
    {
        printf("Stack is Full\n");
    }

    return;
}

void push2(int data)
{
    //checking overflow condition
    if(top1 < top2-1)
    {
        top2--;
        array[top2] = data;
    }
    else
    {
        printf("Stack is Full\n");
    }

    return;
}

int pop1()
{
    int popped_element;
    //checking underflow condition
    if(top1 > 0)
    {
        popped_element = array[top1];
        top1--;
    }
    else
    {
        printf("Stack is Empty\n");
    }

    return popped_element;
}

int pop2()
{
    int popped_element;
    //checking underflow condition
    if(top2 < size)
    {
        popped_element = array[top2];
        top2++;
    }
    else
    {
        printf("Stack is Empty\n");
    }

    return popped_element;
}

void display_stack1()
{
    int i;

    for(i=top1;i>=0;--i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    return;
}

void display_stack2()
{
    int i;

    for(i=top2; i<size; ++i)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    return;
}

int main()
{
    printf("enter the size of an array: ");
    scanf("%d", &size);

    array = (int *)malloc(size*sizeof(int));

    top1 = -1;
    top2 = size;

    push1(10);
    push2(20);
    push2(30);
    push2(40);

    display_stack1();
    display_stack2();

    return 0;
}