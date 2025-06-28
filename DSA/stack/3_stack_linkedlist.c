#include <stdio.h>
#include <stdlib.h>
struct linkedlist
{
    int data;
    struct linkedlist *next;
};
struct linkedlist* push(struct linkedlist *top, int value)
{
    struct linkedlist *ptr = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    ptr->data = value;
    ptr->next = top;
    top = ptr;
    return top;
}
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
    struct linkedlist *top = (struct linkedlist *)malloc(sizeof(struct linkedlist));
    top->next=NULL;
    top=push(top, 23);
    top=push(top, 2);
    display(top);
    return 0;
}