#include <stdio.h>
#include <stdlib.h>

struct linkedlist
{
    int data;
    struct linkedlist *next;
};
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
    printf("%d",first->next->data);
    return 0;
}