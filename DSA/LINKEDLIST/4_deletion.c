#include <stdio.h>
#include <stdlib.h>
struct linkedlist
{
    int data;
    struct linkedlist *next;
};
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
struct linkedlist *delete_at_first(struct linkedlist *ptr)
{
    struct linkedlist *p;
    p = ptr;
    ptr = ptr->next;
    free(p);
    return ptr;
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
    first=delete_at_first(first);
    display(first);
    return 0;
}