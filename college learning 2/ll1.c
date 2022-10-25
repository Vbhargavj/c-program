// single linkedlist
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *insert_at_first(struct node *ptr, int value)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    if (tmp == NULL)
    {
        printf("node not created\n");
    }
    else
    {
        printf("CReatred \n");
        tmp->data = value;
        tmp->next = ptr;
        return tmp;
    }
}
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));
    head->data = 15;
    head->next = last;
    last->data = 2;
    last->next = NULL;
    head = insert_at_first(head, 12);
    display(head);
    return 0;
}