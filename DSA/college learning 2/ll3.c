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
void insert_at_value(struct node *);
void deletell(struct node *);

int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    head->data = 12;
    head->next = head;
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
    struct node *vbj;
    struct node *head2 = head;
    vbj = head->next;
    // struct node *head2 = head;

    while (head->next != head2)
    {
        head = head->next;
    }
    head->next = vbj;
    free(head2);
    head = vbj;
    return vbj;
}

// this function take struct node pointer and delete node at end
void delete_at_end(struct node *head)
{
    struct node *head2 = head;
    while (head->next != head2)
    {
        head = head->next;
    }
    delete_at_begin(head);
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
        struct node *temp = head->next;
        head->next = head->next->next;
        free(temp);
    }
}

void delete_before_value(struct node *head)
{
    int match;
    printf("Enter the value to delete after\n");
    scanf("%d", &match);
    struct node *head2 = head;
    struct node *prev = head;

    while (head->next != head2)
    {
        if (head->next->data == match)
        {
            break;
        }
        prev = head;
        head = head->next;
    }
    if (head->next->data == match)
    {
        prev->next = head->next;
        struct node *temp = head;
        free(temp);
    }
}

void delete_at_value(struct node *head)
{
    int match;
    printf("Enter the value to delete after\n");
    scanf("%d", &match);
    struct node *head2 = head;
    struct node *prev = head;

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
        prev->next = head->next;
        struct node *temp = head;
        free(temp);
    }
}

int is_empty(struct node *head)
{
    if (head == NULL)
    {
        return 1;
    }
    return 0;
}

int search(struct node *head)
{
    struct node *head2 = head;
    int match, f = -1;
    printf("Enter the value to search\n");
    scanf("%d", &match);

    while (head->next != head2)
    {
        f++;
        if (head->data == match)
        {
            printf("Value found on %d\n", f);
            f = -2;
            break;
        }
        head = head->next;
    }
    if (f != -2)
    {
        printf("Value not found\n");
    }
}

void deletell(struct node *head)
{
    struct node *head2 = head;
    struct node *temp;

    while (head->next != head2)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
    printf("Linkedlist deleted\n");
}

void insert_at_value(struct node *head)
{
    int match, value;
    struct node *head2 = head;
    printf("Enter the value to insert");
    scanf("%d", &value);
    printf("Enter the value to search\n");
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
        head->data == value;
        printf("Value changed %d to %d", match, value);
    }
    else
    {
        printf("Value not found in list\n");
    }
}

void handle(struct node *head)
{
    while (1)
    {
        int c;
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
            deletell(head);
            break;

        case 13:
            search(head);
            break;

        case 14:
            exit(1);
            break;

        default:
            printf("Enter proper value\n");
            sleep(3);
            break;
        }
        printf("press any key to continue\n");
        scanf("%d");
    }
}