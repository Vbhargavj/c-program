#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void traversal(struct node *first)
{
    struct node *ptr = first;
    do
    {
        printf("traversal: %d\n", ptr->data);
        ptr = ptr->next;

    } while (ptr != first);
}
struct node *insertion(struct node *first, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;

    struct node *p = first->next;

    while (p->next != first)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = first;
    first = ptr;
    return first;
}

int main()
{
    struct node *first;
    struct node *second;
    struct node *third;
    struct node *fourth;
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    first->data = 2;
    first->next = second;

    second->data = 12;
    second->next = third;

    third->data = 22;
    third->next = fourth;

    fourth->data = 32;
    fourth->next = first;

   printf("before insertion the value");
    traversal(first);

    printf("after insertion the value");
    first = insertion(first, 42);
    traversal(first);

    return 0;

}
