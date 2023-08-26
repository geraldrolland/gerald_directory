void find_listint_loop(listint_t *head)
{
    const struct node *fast;
    const struct node *slow;
    fast=head;
    slow=head;
    while (1>0)
    {
        if (slow==fast){
            printf("looped found in the list");
            break;
        }
        if (fast==NULL)
        {
            printf("looped not found in the list");
            break;
        }
        fast =fast->next->next;
        slow = slow->next;
    }
    
}



