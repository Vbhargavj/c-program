#include <stdio.h>
#include <stdlib.h>
// this structure is crate node
struct linkedlist
{
    int data;
    struct linkedlist *next;
};
// this functon is used to display the list of linked lists
void display(struct linkedlist *ptr)
{
    struct linkedlist *p = ptr;
    do
    {
        printf("element : %d \n", ptr->data);
        ptr = ptr->next;
    } while (ptr != p);
}
// this function is used to insert element at first
struct linkedlist *insert_at_start(struct linkedlist *head, int element)
{
    // create a node for use in circulate
    struct linkedlist *p = head;
    // crete a new node there for insert into the head
    struct linkedlist *ptr;
    ptr = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    ptr->data = element;
    // this loop is find the last node in the linked list
    do
    {
        p = p->next;
    } while (p->next != head);
    // last node is point our new node
    p->next = ptr;
    // our new node is point our old head
    ptr->next = head;
    // now our old head is our new head
    head = ptr;
    // return new head
    return head;
}
void insert_into_btw(struct linkedlist *head, int element, int index)
{
    // assume that linked list starting with head
    // this pointer circulate
    struct linkedlist *ptr = head;
    // this pointer create node and store value
    struct linkedlist *p = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    p->data = element;
    // this loop is find the index before pointer
    for (int i = 1; i < index; i++)
    {
        // ptr= ptr->next;
        if (ptr->next != head)
        {
            printf("error\n");
            printf("Enter valid index\n");
            exit(1);
        }
        else
        {
            ptr = ptr->next;
        }
    }
    // this statement is point our p pointer next to ptr next
    // ex:- index is 1
    // first is our ptr
    // first next(second) is our new pointer next(second)
    p->next = ptr->next;
    // first next is our new pointer 
    ptr->next = p;
}

int main()
{
    struct linkedlist *head;
    struct linkedlist *second;
    struct linkedlist *third;
    head = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    second = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    third = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = head;
    // head = insert_at_start(head, 4);
    // head = insert_at_start(head, 5);
    insert_into_btw(head, 24, 1);
    display(head);
    return 0;
}