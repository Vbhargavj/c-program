#include <stdio.h>
#include <stdlib.h>

struct linkedlist
{
    int data;
    struct linkedlist *next;
};
void display(struct linkedlist *ptr)
{
    // printf("Display is running\n");
    while (ptr != NULL)
    {
        printf("element : %d ", ptr->data);
        // printf("Element address: %d ", ptr->next);
        printf("\n");
        ptr = ptr->next;
    }
}
struct linkedlist *delete_at_first(struct linkedlist *ptr)
{
    struct linkedlist *p;
    p = ptr;
    ptr = ptr->next;
    free(p);
    return ptr;
}
void delete_btw(struct linkedlist *ptr, int index)
{
    for (int i = 1; i < index; i++)
    {
        ptr = ptr->next;
    }
    struct linkedlist *p;
    p = ptr->next;
    ptr->next = p->next;
    free(p);
}
void delete_at_last(struct linkedlist *ptr)
{
    struct linkedlist *p = ptr;
    struct linkedlist *q = ptr->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
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
    // first = delete_at_first(first);
    printf("after delete\n");
    // delete_btw(first, 2);
    delete_at_last(first);
    display(first);
    return 0;
}