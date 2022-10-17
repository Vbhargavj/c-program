#include <stdio.h>
#include <stdlib.h>
// in four method only one method are aeteched -delete firsts
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
struct node *invertion(struct node *first){
    struct node * ptr=first;
    first=first->next;
    free(ptr);
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

    first->data = 6;
    first->next = second;

    second->data = 26;
    second->next = third;

    third->data = 56;
    third->next = fourth;

    fourth->data = 86;
    fourth->next = NULL;

    traversal(first);
    first=invertion(first);
    // printf("/n");
    traversal(first);
    return 0;
}
