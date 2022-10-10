#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("traversal: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
void invertion(struct node *ptr)
{
    ptr->data
}
int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    first->data = 6;
    first->next = second;

    second->data = 56;
    second->next = third;

    third->data = 86;
    third->next = NULL;

    traversal(first);
    return 0;
}
