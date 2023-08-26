#include "LIST_FUNC.h"
/**
*add_node_beg - add node at the begining of the list
*@head: head pointer of the first node
*@data: value to be added in the new node
*Return: ndoe
*/
struct node *add_node_beg(struct node **head, int data){
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->link = *head;
    *head = new;
    return *head;
}