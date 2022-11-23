#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *insert_at_first(struct node *);
void insert_after_value(struct node *);
void insert_before_value(struct node *);
void insert_at_end(struct node *);
void display(struct node *);
struct node *delete_at_begin(struct node *);
void delete_at_end(struct node *);
void delete_at_value(struct node *);
void delete_before_value(struct node *);
void delete_after_value(struct node *);
int is_empty(struct node *);
int search(struct node *);
void handle(struct node *);
void change_value(struct node *);

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->next = head;
    display(head);
    head = insert_at_first(head);
    insert_at_end(head);
    insert_after_value(head);
    insert_before_value(head);
    delete_at_begin(head);

    display(head);

    return 0;
}

void display(struct node *head)
{
    struct node *head2 = head;
    do
    {
        // sleep(2);
        printf("Element : %d\n", head->data);
        head = head->next;
    } while (head != head2);
}

struct node *insert_at_first(struct node *head)
{
    int value;
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = head;
    printf("Enter the value to insert\n");
    scanf("%d", &value);
    if (tmp == NULL)
    {
        printf("node not created\n");
    }
    else
    {
        printf("Created \n");
        tmp->data = value;
        tmp->next = head;
        while (head->next != head2)
        {
            head = head->next;
        }
        head->next = tmp;
        // return tmp;
        head2 = tmp;
        return tmp;
    }
}

// this function take struct node pointer and insert at end
// void insert_at_end(struct node *head)
// {
//     int value;
//     struct node *tmp = (struct node *)malloc(sizeof(struct node));
//     struct node *head2=head;
//     printf("Enter the value to insert at end\n");
//     scanf("%d", &value);
//     tmp->data = value;
//     tmp->next=head;
//     while (head->next!=head2 )
//     {
//         head = head->next;
//     }
//     head->next = tmp;
//     printf("Node Inserted \n");
// }
void insert_at_end(struct node *head)
{
    struct node *head2 = head;

    while (head->next != head2)
    {
        head = head->next;
    }
    insert_at_first(head);
}

// this function take struct node pointer and find the given value and add value after given value
void insert_after_value(struct node *head)
{
    int match, value, flag = 0;
    struct node *head2 = head;
    printf("Enter the value to insert");
    scanf("%d", &value);
    printf("Enter the value  to add after\n");
    scanf("%d", &match);

    while (head->next != head2)
    {
        if (head->data == match)
        {
            printf("Value found\n");
            break;
        }
        head = head->next;
    }

    if (head->data == match)
    {
        struct node *tmp = (struct node *)malloc(sizeof(struct node));
        tmp->data = value;
        tmp->next = head->next;
        head->next = tmp;
        printf("Inserted\n");
    }
    else
    {
        printf("Value not found in list\n");
    }
}

void insert_before_value(struct node *head)
{
    int match, val;
    printf("Enter the number to before add value\n");
    scanf("%d", &match);
    printf("Enter the value to insert\n");
    scanf("%d", &val);

    struct node *head2 = head;
    struct node *prev;

    while (head->next != head2)
    {
        if (head->data == match)
        {
            break;
        }
        prev = head;
        head = head->next;
    }
    if (head->data == match)
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp->data = val;
        temp->next = head;
        prev->next = temp;
    }
    else
    {
        printf("Value not found\n");
    }
}

struct node *delete_at_begin(struct node *head)
{
    struct node *temp = head;
    struct node *head2 = head;
    // head = head->next;
    while (head->next != head2)
    {
        head = head->next;
    }
    head->next = head2->next;
    free(temp);
    return head;
}
