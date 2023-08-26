#include "LIST_FUNC.h"
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
            break;
        }
        count++;
        ptr = ptr->link;
    }
    return count;
}