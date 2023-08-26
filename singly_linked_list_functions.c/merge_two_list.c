struct node *merge_list(struct node *head1, struct node *head2, int node_pos)
{
    struct node *ptr1=NULL;
    struct node *ptr2=NULL;
    struct node *temp=NULL;
    int i;
    ptr1=head1;
    for (i=0;;i++)
    {
        if (i == node_pos-1)
        {
            ptr1->link = temp;
            ptr1->link = head2;
            ptr2 = head2;
            while(head2)
            {
                if (ptr2->link==NULL)
                {
                    ptr2->link=temp;
                    break;
                }
                ptr2=ptr2->link;
            }
        }
        if (ptr2->link==temp)
        {
            break;
        }
        ptr1=ptr1->link;
    }
    return head1;
}