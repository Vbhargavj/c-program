#include <stdio.h>
#include <stdlib.h>
struct linkedlist
{
    int data;
    struct linkedlist *next;
};
// this functon is used to display the list of linked lists
void display(struct linkedlist *ptr)
{
    printf("Display is running\n");
    while (ptr != NULL)
    {
        printf("element : %d ", ptr->data);
        // printf("Element address: %d ", ptr->next);
        printf("\n");
        ptr = ptr->next;
    }
}
// this function used to insert value at the end of the linkedlist
void insert_end_of_nodes(struct linkedlist *ptr, int element)
{
    // this loop is used to find last pointer in the linkedlist
    while (ptr->next != NULL)
    {
        // printf("%d\n", ptr);
        ptr = ptr->next;
    }
    printf("\n");
    // printf("%d\n", ptr);
    // create a new node(structure) there for added to last of linkedlist
    struct linkedlist *fourth;
    fourth = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    ptr->next = fourth;
    fourth->data = element;
    fourth->next = NULL;
    printf("Insert succersfully\n");
}
// this function is used to insert elements in btw the linked list's index provide by user
void insert_btw_nodes(struct linkedlist *ptr, int index, int element)
{
    // this for loop is find index gap between the nodes
    for (int i = 1; i < index; i++)
    {
        ptr = ptr->next;
        printf("%d\n", ptr);
    }
    printf("\n");
    // create the node to hold first->next pointer into the linked list
    struct linkedlist *temp;
    /* here take an example
       insert element into first gap
       so our index = 1
       upper loop will not execute
       so ptr is default which passing in function(first)
       assign temp pointer to value of fisrt next means second(pointer)
       because first->next is the second pointer
       create node there for insert into the first gap
       created node assign value
       and now our first next is our created node(fifth)
       and last created(fifth) pointer next is temp means second(pointer)
       so no link will be destroyed
    */
    temp = ptr->next;

    printf("\n%d\n", ptr);

    struct linkedlist *fifth;
    fifth = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    ptr->next = fifth;
    fifth->data = element;
    fifth->next = temp;
}
struct linkedlist *insert_at_start(struct linkedlist *first, int element)
{
    struct linkedlist *head;
    head = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    head->next = first;
    head->data = element;
    return head;
}
// this function is used to add value at given pointer
void insert_given_pointer(struct linkedlist *ptr, int element)
{
    // create new node to add in the given pointer at last
    struct linkedlist *tmp;
    tmp = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    // add data into the new node
    tmp->data = element;
    // ex: temp-> next is second->next(third)
    // so temp next=third
    tmp->next = ptr->next;
    // and ptr->next(second->next ) is tmp;
    ptr->next = tmp;
}
int main()
{
    struct linkedlist *first;
    struct linkedlist *second;
    struct linkedlist *third;
    first = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    second = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    third = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    first->data = 12;
    first->next = second;
    second->data = 5;
    second->next = third;
    third->data = 4;
    third->next = NULL;
    display(first);
    insert_end_of_nodes(first, 14);
    display(first);
    insert_btw_nodes(first, 1, 190);
    display(first);
    first = insert_at_start(first, 1);
    display(first);
    insert_given_pointer(second, 1.2);
    display(first);
    return 0;
}