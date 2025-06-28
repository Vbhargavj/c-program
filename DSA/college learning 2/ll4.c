#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *insert_at_first(struct node *);
void insert_after_value(struct node *);
void insert_before_value(struct node *);
void insert_at_end(struct node *);
void display(struct node *);
struct node *delete_at_begin(struct node *);
struct node *delete_at_end(struct node *);
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
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));

    head->data = 34;
    head->next = second;
    head->prev = last;

    second->data = 2;
    second->next = last;
    second->prev = head;

    last->data = 45;
    last->prev = second;
    last->next = head;

    handle(head);

    return 0;
}

void display(struct node *head)
{
    struct node *head2 = head;
    do
    {
        printf("Element : %d\n", head->data);
        head = head->next;
    } while (head != head2);
}

struct node *insert_at_first(struct node *head)
{
    int val;
    printf("Enter the value\n");
    scanf("%d", &val);

    struct node *head2 = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    while (head->next != head2)
    {
        head = head->next;
    }
    temp->prev = head;
    head->next = temp;
    head2->prev = temp;
    head = temp;
    return head;
}

void insert_at_end(struct node *head)
{
    int val;
    printf("Enter the value\n");
    scanf("%d", &val);
    struct node *head2 = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = val;
    temp->next = head;
    while (head->next != head2)
    {
        head = head->next;
    }
    temp->prev = head;
    head->next = temp;
}

void insert_after_value(struct node *head)
{
    int val, match;
    printf("Enter the value to insert\n");
    scanf("%d", &val);
    printf("Enter the matching value\n");
    scanf("%d", &match);
    struct node *head2 = head;

    while (head->next != head2)
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
        head->next->prev = temp;
        head->next = temp;
    }
}

void insert_before_value(struct node *head)
{
    int val, match;
    printf("Enter the value to insert\n");
    scanf("%d", &val);
    printf("Enter the matching value\n");
    scanf("%d", &match);
    struct node *head2 = head;

    while (head->next != head2)
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
        head->prev->next = temp;
    }
}

struct node *delete_at_begin(struct node *head)
{
    struct node *temp = head->next;
    struct node *head2 = head;
    while (head->next != head2)
    {
        head = head->next;
    }
    temp->prev = head;
    head->next = temp;
    free(head2);
    return temp;
}

struct node *delete_at_end(struct node *head)
{
    struct node *head2 = head;
    while (head->next != head2)
    {
        head = head->next;
    }
    delete_at_begin(head);
}

void delete_at_value(struct node *head)
{
    int match;
    printf("Enter the value to to insert after given value\n");
    scanf("%d", &match);

    struct node *head2 = head;
    while (head->next != head2)
    {
        if (head->data == match)
        {
            break;
        }

        head = head->next;
    }
    if (head->data == match)
    {
        head->prev->next = head->next;
        head->next->prev = head->prev;
    }
    else
    {
        printf("Value not found\n");
    }
}

void delete_after_value(struct node *head)
{
    int match;
    printf("Enter the value to delete after\n");
    scanf("%d", &match);
    struct node *head2 = head;

    while (head->next != head2)
    {
        if (head->data == match)
        {
            break;
        }
        head = head->next;
    }

    if (head->data == match)
    {
        head2 = head->next;
        head->next->prev = head;
        head->next = head->next->next;
        free(head2);
        printf("Deleted\n");
    }
}

void delete_before_value(struct node *head)
{
    int match;
    printf("Enter the value to delete before\n");
    scanf("%d", &match);
    struct node *head2 = head;

    while (head->next != head2)
    {
        if (head->data == match)
        {
            break;
        }
        head = head->next;
    }

    if (head->data == match)
    {
        head2 = head->prev;
        head->prev->prev->next = head;
        head->prev = head->prev->prev;
        free(head2);
    }
}

int search(struct node *head)
{
    int val, f = -2;
    printf("Enter the value to search\n");
    scanf("%d", &val);
    struct node *head2 = head;
    while (head->next != head2)
    {
        f++;
        if (head->data == val)
        {
            f = -1;
            printf("Value founded\n");
            break;
        }
        head = head->next;
    }
    if (f == -2)
    {
        printf("Value not found\n");
    }
    else
    {
        printf("Value found on index of %d\n", f + 2);
    }
}

void insert_at_value(struct node *head)
{
    int val, match;
    printf("Enter the value to at change\n");
    scanf("%d", &match);

    printf("Enter the value to insert\n");
    scanf("%d", &val);
    struct node *head2 = head;
    while (head->next != head2)
    {
        if (head->data == match)
        {
            break;
        }
        head = head->next;
    }
    if (head->data == match)
    {
        head->data = val;
        printf("Value changed\n");
    }
    else
    {
        printf("Value not found\n");
    }
}

void handle(struct node *head)
{
    while (1)
    {
        int c, flag;
        fflush(stdin);

        system("cls");
        printf("|_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t |\n");
        printf("\x1B[35m");
        printf("|                                         VADUKAR BHARGAV JENTIBHAI                                              |\n");
        printf("|                                     ENROLLMENT NUMBER : 210210116054                                           |\n");
        printf("\x1B[0m");
        printf("|_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n\n");
        printf("\x1B[33m");
        printf("Enter the number to perform any operation\n");
        printf("\x1B[30m");
        printf("\tINSERT operations\n");
        printf("\x1B[35m");
        printf("\t\t1:Insert At Begin\n");
        printf("\t\t2:Insert At End\n");
        printf("\t\t3:Insert At Given Value\n");
        printf("\t\t4:Insert Before Value\n");
        printf("\t\t5:Insert After Given Value\n\n");
        printf("\x1B[30m");
        printf("\tDELETE operations\n");
        printf("\x1B[35m");
        printf("\t\t6:Delete At Begin\n");
        printf("\t\t7:Delete At End\n");
        printf("\t\t8:Delete At Value\n");
        printf("\t\t9:Delete After Value\n");
        printf("\t\t10:Delete Before Value\n\n");
        printf("\x1B[0m");
        printf("\t11:DISPLAY\n");
        printf("\x1B[30m");
        printf("\tLINKEDLIST OP\n");
        printf("\x1B[35m");
        printf("\t\t12:Delete Linkedlist\n");
        printf("\t\t13:Create Linkedlist\n");
        printf("\x1B[0m");
        printf("\t14:EXIT\n");
        printf("\n\n\t\t");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            head = insert_at_first(head);
            break;
        case 2:
            insert_at_end(head);
            break;
        case 3:
            insert_at_value(head);
            break;
        case 4:
            insert_before_value(head);
            break;
        case 5:
            insert_after_value(head);
            break;
        case 6:
            head = delete_at_begin(head);
            break;
        case 7:
            delete_at_end(head);
            break;
        case 8:
            delete_at_value(head);
            break;
        case 9:
            delete_after_value(head);
            break;
        case 10:
            delete_before_value(head);
            break;
        case 11:
            display(head);
            break;
        case 12:
            // deletell(head);
            break;
        case 13:
            search(head);
            break;
        case 14:
            exit(1);
            break;
        default:
            printf("Enter proper value to perform operation\n");
            break;
        }
        printf("press any key to go main menu\n");
        scanf("%d");
    }
}