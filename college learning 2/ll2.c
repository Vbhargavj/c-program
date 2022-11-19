#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *insertatfirst(struct node *, int);
void insert_after_value(struct node *, int, int);
void insert_at_end(struct node *, int);
void display(struct node *);
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));

    head->prev = NULL;
    head->data = 4096;
    head->next = second;

    second->prev = head;
    second->data = 3;
    second->next = last;

    last->prev = second;
    last->data = 78;
    last->next = NULL;

    display(head);
    // head = insertatfirst(head, 20);
    insert_at_end(head, 23);
    insert_after_value(head, 3, 50);

    printf("\n");
    display(head);

    return 0;
}

void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node *insertatfirst(struct node *head, int val)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    // struct node *head2=head;
    temp->data = val;
    temp->next = head;
    head->prev = temp;
    temp->prev = NULL;
    head = temp;
}
void insert_at_end(struct node *head, int val)
{
    int b = 0;
    while (head->next != NULL)
    {
        head = head->next;
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = head;
    head->next = temp;
};
void insert_after_value(struct node *head, int match, int val)
{
    printf("yes1\n");
    while (head->next != NULL)
    {
        if (head->data != match)
        {
            break;
        }

        printf("yes\n");
        head = head->next;
    }
    printf("yes3\n");
    if (head->data == match)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = val;
        temp->next = head->next;
        temp->prev = head;
        head->next = temp;
        head->next->prev = temp;
    }
}