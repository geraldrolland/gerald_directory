#include "LIST_FUNC.h"
/*
*print_node - prints nodes data in a singly linked list
*@h: pointer to head pointer of the first node
*Return: void
*/
void print_node(struct node *h)
{
    if (h == NULL){
    printf("empty node");
    }
    struct node *ptr = h;
    while(1)
    {
        if (ptr->link == NULL){
            printf("%d\n", ptr->data);
            break;
        }
        printf("%d\n", ptr->data);
        ptr = ptr->link;
    }

}