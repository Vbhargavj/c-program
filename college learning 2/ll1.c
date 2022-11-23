// single linkedlist
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// this function take struct node pointer and insert value at first
struct node *insert_at_first(struct node *ptr)
{
    int value;
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert");
    scanf("%d", &value);
    if (tmp == NULL)
    {
        printf("node not created\n");
    }
    else
    {
        printf("Created \n");
        tmp->data = value;
        tmp->next = ptr;
        return tmp;
    }
}

// this function take struct node pointer and insert at end
struct node *insert_at_end(struct node *ptr)
{
    int value;
    struct node *tmp = (struct node *)malloc(sizeof(struct node));

    printf("Enter the value to insert at end\n");
    scanf("%d", &value);
    tmp->data = value;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = tmp;
    tmp->next = NULL;
    printf("Node Inserted \n");
}

// this function take struct node pointer and display the linkedlist
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        // sleep(2);
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// this function take struct node pointer and find the given value and add value after given value
void insert_after_value(struct node *ptr)
{
    int val, value, flag = 0;
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    struct node *tp = (struct node *)malloc(sizeof(struct node));
    printf("Enter the value to insert");
    scanf("%d", &value);
    printf("Enter the value  to add after\n");
    scanf("%d", &val);

    while (ptr != NULL)
    {
        if (ptr->data == val)
        {
            flag = 1;
            printf("%d\n", ptr->data);
            break;
        }
        ptr = ptr->next;
    }

    if (flag == 0)
    {
        printf("Value not found \n");
        return;
    }
    else
    {
        printf("Value  found \n");
    }

    tp = ptr->next;
    tmp->data = value;
    ptr->next = tmp;
    tmp->next = tp;
    printf("Inserted\n");
}

void insert_before_value(struct node *ptr)
{
    
}

// this function take struct node pointer and delete node at end
struct node *delete_at_end(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *q = (struct node *)malloc(sizeof(struct node));
    p = ptr;
    q = ptr->next;
    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
        //  tmp = tmp->next;
    }

    p->next = NULL;
    free(q);
    return p;

    printf("Delete at end\n");
}

// this function take struct node pointer and delete node at start(head)
struct node *delete_at_begin(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    p = ptr->next;
    free(ptr);
    printf("Delete at beign\n");
    return p;
}

// this function take struct node pointer and delete node after given value
void delete_after_value(struct node *ptr)
{

    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *q = (struct node *)malloc(sizeof(struct node));
    p = ptr;
    q = ptr->next;
    int flag = 0, val;
    printf("Enter the value that delete that value after\n");
    scanf("%d", &val);
    while (q != NULL)
    {
        if (p->data == val)
        {
            flag = 1;
            printf("%d\n", q->data);
            break;
        }
        p = p->next;
        q = q->next;
    }
    if (flag == 0)
    {
        printf("%d is not found\n", val);
        return;
    }
    printf("Deleted");
    p->next = q->next;
    free(q);
}

// this function take struct node pointer and delete node before given value
void delete_before_value(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *q = (struct node *)malloc(sizeof(struct node));
    p = ptr;
    q = ptr->next;
    int flag = 0, val;
    printf("Enter the value that delete that value before\n");
    scanf("%d", &val);
    while (q != NULL)
    {
        if (p->data == val)
        {
            flag = 1;
            printf("%d\n", q->data);
            break;
        }
        p = p->next;
        q = q->next;
    }
    if (flag == 0)
    {
        printf("%d value  not found in linkedlist\n", val);
        return;
    }
    else
    {
        printf("Delete successfully\n");
    }

    p->next = q->next;
    free(q);
}

// this function take struct node pointer and delete node at given value
void delete_at_value(struct node *ptr)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    struct node *q = (struct node *)malloc(sizeof(struct node));
    p = ptr;
    q = ptr->next;
    int flag = 0, val;
    printf("Enter the value that delete that value before\n");
    scanf("%d", &val);
    while (q != NULL)
    {
        if (q->data == val)
        {
            flag = 1;
            printf("%d\n", q->data);
            break;
        }
        p = p->next;
        q = q->next;
    }
    if (flag == 0)
    {
        printf("%d value  not found in linkedlist\n", val);
        return;
    }
    else
    {
        printf("Delete successfully\n");
    }

    p->next = q->next;
    free(q);
}
// struct node *insert(struct node *ptr)
// {
//     int ch;
//     printf("Choose operation to perform \n");
//     printf("\t1:insert at begin\n");
//     printf("\t2:insert at end\n");
//     printf("\t3:insert at given value\n");
//     printf("\t4:insert before value\n");
//     printf("\t5:insert after given value\n");
//     scanf("%d", &ch);
//     switch (ch)
//     {
//     case 1:
//         return insert_at_first(ptr);
//         break;
//     case 2:
//         insert_at_end(ptr);
//         break;
//     default:
//         break;
//     }
// }
void deletell(struct node *ptr)
{
    struct node *t = (struct node *)malloc(sizeof(struct node));
    struct node *s = (struct node *)malloc(sizeof(struct node));
    s = ptr->next;
    while (s != NULL)
    {
        s = s->next;
        t = s;
        free(t);
    }
    free(ptr);
}
int main()
{
    // intilisilize section
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *last = (struct node *)malloc(sizeof(struct node));

    head->data = 15;
    head->next = last;

    last->data = 2;
    last->next = NULL;

    int c, i = 0, flag = 0, val;
    // here this loop repeat infinite and called all function perform according
    while (1)
    {
        fflush(stdin);
        sleep(1);
        system("cls");
        printf("%d\n", i++);
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
            // insert_at_value(head);
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
            if (flag == 1)
            {
                printf("You deleted linkedlist\n");
            }
            else
            {
                display(head);
            }

            break;
        case 12:
            deletell(head);
            flag = 1;
            break;
        case 13:
            head->data = val;
            break;
        case 14:
            exit(1);
            break;
        default:
            printf("Enter proper value\n");
            break;
        }
    }
    return 0;
}