#include "LIST_FUNC.h"
/**
*del_node - deletes node indicated by the index in a list
*@head: pointer to the head pointer
*@index: node index to be deleted
*Return: void
*/

struct node *del_node(struct node **head, const int index)
{
    int i;
    struct node *ptr1 = NULL;
    struct node *ptr2 = NULL;
    if (*head==NULL)
    {
        return;
    }
    else if (index == 0){
    struct node *ptr1 = *head;
    *head = *head->link;
    free(ptr);
    ptr = NULL;
    return (*head);
    }
    else
    {
        ptr1 = *head;
        ptr2 = NULL;
        for (i = 0;;i++)
        {
            if (i == index)
            {
                ptr2->link = ptr1->link;
                ptr1->link = NULL;
                free(ptr1);
                ptr1 = NULL;
                return (*head);

            }
            ptr2 = ptr1;
            ptr1 = ptr1->link;
        }
    }
}