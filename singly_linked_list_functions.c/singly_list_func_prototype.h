/*****SINGLY_LINKED_LIST_FUNCTION_PROTOTYPES*****/
#ifndef SINGLY_LIST_FUNC_PROTOTYPE_H
#define SINGLY_LIST_FUNC_PROTOTYPE_H
1. void print_node(struct node *h);
2. struct node *insert_node(struct node **head, int input, int node_pos, int list_size); 
3. struct node *del_node(struct node **head, const int index); 
4. struct node *add_node_end(struct node **head, int data); 
5. struct node *add_node_beg(struct node **head, int data); 
6. void delete_all_nodes_recur(struct node *head);  
7. void find_listint_loop(listint_t *head) 
8. struct node *update_list(struct node *head, int node_pos, int data); 
9. struct node * reverse_list(struct node *head); 
10.struct node *merge_list(struct node *head1, struct node *head2, int node_pos) 
11.int node_count(struct node *head);
#endif
