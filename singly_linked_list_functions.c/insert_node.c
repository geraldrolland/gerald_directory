#include "LIST_FUNC.h"
/**
*insert_node - insert node at the position indicated by the node_pos variable
*@head: pointer to the head pointer
*@input: data to be inserted
*@node_pos: indicate the position the node to be deleted
*@list_size: size of a list
*Return: *head on success
*/
struct node *insert_node(struct node **head, int input, int node_pos, int list_size)
{
    struct node *ptr = *head;
    if (node_pos-1 == 0)
    {
        struct node *new = malloc(sizeof(struct node));
        new->data = input;
        new->link = *head;
        *head = new;
        return *head;
    }
    if (node_pos-1 >= list_size-1)
    {
        printf("node position greater than list size\n");
        printf("by default inserting node as last node in the list\n");
        int i;
        for (i=0;;i++)
        {
            if (ptr->link == NULL)
            {
                struct node *new = malloc(sizeof(struct node));
                new->data = input;
                new->link = NULL;
                ptr->link = new;
                printf("node successfully inserted as last node in the list\n");
                return *head;
            }
            ptr = ptr->link;
        }
    }
    struct node *ptr1 = ptr;
    int j;
    for (j = 0;;j++)
    {
        if (j == node_pos-1){
            struct node *new = malloc(sizeof(struct node));
            if (new == NULL)
            {
                printf("memory not allocated");
                exit(98);
            }
            new->data = input;
            new->link = ptr;
            ptr1->link = new;
            printf("node inserted at specified index successfully");
            return *head;
            break;
        }
        ptr1->link = ptr->link;
        ptr = ptr->link;
    }
}