#include "LIST_FUNC.h"
/**
*creat_loop_in_list - creates loop in a singly linked list
*@head: pointer to the head pointer
*Return: head
*/
struct node *create_loop_in_list(struct node *head)
{
    struct node *ptr1 = head;
    if (head == NULL)
    {
        printf("empty node");
        exit(98);
    }
    int list_size = node_count(head);
    if (list_size0 < 2)
    {
        printf("insufficient node to be looped\n");
        printf("nodes must be at least two minimum");
    }
    while(head)
    {
        if (ptr1->link == NULL)
        {
            ptr1->link = head;
            printf("loop created successfully");
            break;
        }
        ptr1 = ptr1->link;
    }

}
/**
*node_count - returns the number of nodes present in a list
*@head: pointer to the first node
*Return: count
*/
int node_count(struct node *head)
{
    if (head == NULL)
    {
        printf("empty nodes");
        exit(98);
    }
    struct node *ptr=head;
    int i, count = 0;
    for (i = 0;;i++)
    {
        if (ptr->link == NULL)
        {
            count++;
            return count;
        }
        count++;
        ptr = ptr->link;
    }
}
