/*
    find the length of the given linked list,
    nth node from end is (len - n +1)
*/

void delete_nth_node_end(struct node *head, int n)
{
    int len = 0, i;
    struct node *tmp = head;

    while(tmp != NULL)
    {
        len++;
        tmp = tmp->next;
    }

    if(len < n)
        return;
    
    struct node *current = head;
    for(i=0;i<len-n; i++)
        current = current->next;
    
    //remove current->next node
    tmp = current->next;
    current->next = tmp->next;
    
    free(tmp);

    return;
}





struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    struct ListNode *slow = head, *fast = head;
    
    int i;
    
    for(i=0;i<n;i++){
        fast = fast->next;
    }
    
    while(fast->next != NULL){
        slow = slow->next;
        fast = fast->next;
    }
    
    struct node *tmp = slow->next;
    
    slow->next = slow->next->next;
    
    free(tmp);
    
    return head;
}