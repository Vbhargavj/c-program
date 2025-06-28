#include <stdio.h>
#include <stdlib.h>
struct linkedlist
{
    int data;
    struct linkedlist *next;
};
void display(struct linkedlist *ptr)
{
    while (ptr != NULL)
    {
        printf("element : %d ", ptr->data);
        printf("Element address: %d ", ptr->next);
        printf("\n");
        ptr = ptr->next;
    }
}
int main()
{
    struct linkedlist *first;
    struct linkedlist *second;
    struct linkedlist *third;
    first = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    second = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    third = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    first->data = 14;
    first->next = second;
    second->data = 5;
    second->next = third;
    third->data = 4;
    third->next = NULL;
    display(first);
    return 0;
}