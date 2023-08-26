/**
 *reverse_list - reverse the list of a singly linked list
 *@head: pointer to the first node inthe list 
 *Return: head on success
 */
struct node * reverse_list(struct node *head)
{
    struct node *ptr1=NULL;
    struct node *ptr2=NULL;
    if (head==NULL)
    {
        printf("empty list");
    }
    while (1>0)
    {
        if (head==NULL)
        {
            head=ptr2;
            break;
        }
        ptr1=head->link;
        head->link = ptr2;
        ptr2=head;
        head=ptr1;
    }
    return head;

    
}