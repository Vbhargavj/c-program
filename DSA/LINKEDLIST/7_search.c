#include <stdio.h>
#include <stdlib.h>

struct linkedlist
{
    int data;
    struct linkedlist *next;
};
void search(struct linkedlist *ptr, int find)
{
    int index = 1;
    while (ptr != NULL)
    {
        if (ptr->data == find)
        {
            index++;
            printf("Found pointer in %d\n", index);
        }
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
    search(first, 5);
    return 0;
}