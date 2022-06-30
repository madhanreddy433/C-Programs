/*
1. detect the loop using Floyd's detection algorithm
2. move the "slow_ptr" to beginning of LL and keep the 'fast_ptr' at meeting point.
3. now one by one move slow_ptr and fast_ptr (at same speed). 
    The point where they meet now is the first node of the loop
*/

struct node 
{
    int data;
    struct node *next;
}*head = NULL;

void detect_and_remove_loop(struct node *head)
{
    struct node *slow_ptr = head, *fast_ptr = head;

    while(fast_ptr != NULL && fast_ptr != NULL)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next->next;
        if(slow_ptr == fast_ptr)
            break;
    }

    if(slow_ptr != fast_ptr)
        return; //no loop return
    
    slow_ptr = head;
    while(slow_ptr->next != fast_ptr->next)
    {
        slow_ptr = slow_ptr->next;
        fast_ptr = fast_ptr->next;
    }
    fast_ptr->next = NULL;  //remove loop

    return;
}
