/**
 *update_list - update data in a specified node in a singly linked list
 *@head: pointer to the first node of the list
 *@node_pos: position of specified node in a list
 *@data: data to be inserted in the specified node
 *Return: head on success 
 */
struct node *update_list(struct node *head, int node_pos, int data)
{
    struct node *ptr=head;
    int i=0;
    while(1>0)
    {
        if (node_pos-1==i)
        {
            ptr->data=data;
            break;

        }
        i++;
        ptr=ptr->link;
    }
    return head;
}