// doubly linklist
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *insert_at_first(struct node *, int);
void insert_after_value(struct node *, int, int);
void insert_before_value(struct node *, int, int);
void insert_at_end(struct node *, int);
void display(struct node *);
struct node *delete_at_begin(struct node *);
void delete_at_end(struct node *);
void delete_at_value(struct node *);

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

    // head = insertatfirst(head, 20);
    // insert_at_end(head, 23);
    // insert_at_end(head, 2);
    // insert_at_end(head, 253);
    // insert_at_end(head, 13);
    // insert_after_value(head, 3, 50);
    insert_before_value(head, 3, 12);
    display(head);
    printf("\n");
    // head = delete_at_begin(head);
    // delete_at_end(head);
    // delete_at_value(head);
    // display(head);

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

struct node *insert_at_first(struct node *head, int val)
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
    while (head->next != NULL)
    {
        if (head->data == match)
        {
            break;
        }
        head = head->next;
    }

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

// void insert_before_value(struct node *head, int match, int val)
// {
//     while (head->next != NULL)
//     {
//         if (head->next->data == match)
//         {
//             break;
//         }
//         head = head->next;
//     }
//     insert_after_value(head, head->data, val);
// }

void insert_before_value(struct node *head, int match, int val)
{
    while (head->next != NULL)
    {
        if (head->data == match)
        {
            break;
        }
        head = head->next;
    }
    if (head->data == match)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = val;
        temp->next = head;
        temp->prev = head->prev;
        head->prev = temp;
        head->prev->prev->next= temp;
        
    }
}

struct node *delete_at_begin(struct node *head)
{
    struct node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
    printf("Deleted\n");
    return head;
}
void delete_at_end(struct node *head)
{
    // struct node *head2 = head;
    while (head->next != NULL)
    {
        head = head->next;
    }
    struct node *temp = head;
    free(temp);
    head->prev->next = NULL;
}

void delete_at_value(struct node *head)
{
    int match;
    printf("Enter the value");
    scanf("%d", &match);

    while (head->next != NULL)
    {
        // printf("in loop\n");
        if (head->data == match)
        {
            // printf("in if\n");
            break;
        }
        head = head->next;
    }

    if (head->data == match)
    {
        // printf("Yes\n");
        struct node *temp = head;
        // printf("Yes\n");
        head->prev->next = head->next;
        // printf("Yes\n");
        head->next->prev = head->prev;
        // printf("Yes\n");
        free(temp);
    }
}