#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
void displaynext(struct node *head)
{
    while (head != NULL)
    {
        printf("%d ", head->data);
        head = head->next;
    }
}
void displaylast(struct node *last)
{
    while (last != NULL)
    {
        printf("%d ", last->data);
        last = last->prev;
    }
}
void displaylastfirst(struct node *head, struct node *last)
{
    displaynext(head);
    displaylast(last);
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *last;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    last = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 1;
    head->next = second;

    second->prev = head;
    second->data = 2;
    second->next = third;

    third->prev = second;
    third->data = 3;
    third->next = last;

    last->prev = third;
    last->data = 4;
    last->next = NULL;

    displaynext(head);
    displaylast(last);
    return 0;
}
