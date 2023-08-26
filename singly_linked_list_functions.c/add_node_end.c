/**
 *add_node_end - adds node at the end of a singly linked list
 *@head: pointer to head pointer of the first node
 *@data: data to be inserted
 *Return: *head on success
 */

struct node *add_node_end(struct node **head, int data)
{
    if (*head == NULL || head==NULL)
    {
        printf("empty node");
        exit(98);
    }
    struct node *ptr = *head;
    struct node *new = malloc(sizeof(struct node));
    if (new == NULL)
    {
        printf("memory not allocated");
        exit(98);
    }
    while(head)
    {
        if (ptr->link == NULL)
        {
            new->data = data;
            new->link = NULL;
            ptr->link = new;
            break; 
        }
        ptr = ptr->link;
    }
    return *head;
}