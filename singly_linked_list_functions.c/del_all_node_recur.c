/**
 *delete_all_nodes_recur - delete all nodes present in given singly linked list
 *@head: pointer to the head node
 *Return: void 
 */
void delete_all_nodes_recur(struct node *head)
{
    char ch[3];
    while (head)
    {
    printf("this action is irreversible, do you still want to continue ? 'yes/no' ");
    scanf("%s", &ch);
    if (ch == "no")
    {
        printf("all nodes intact");
        exit(98);
    }
    else if (ch == "yes")
    {
    struct node *temp;
    while(1)
    {
        if (head->link == NULL)
        {
            free(head);
            printf("All nodes deleted successfully");
            head = NULL;
            break;
        }
        temp = head;
        head = head->link;
        free(temp);
    }
    break;
    }
    else
    {
        printf("invalid input");
    }
    }
}