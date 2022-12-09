// single linkedlist
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

// This function take struct node pointer and insert value at first
struct node *insert_at_first(struct node *ptr)
{
    int value;
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
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
        tmp->next = ptr;
        ptr = tmp;
        return tmp;
    }
}

// This function take struct node pointer and insert at end
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

// This function take struct node pointer and display the linkedlist
void display(struct node *ptr)
{
    while (ptr != NULL)
    {
        // sleep(2);
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// This function take struct node pointer and find the given value and add value after given value
void insert_after_value(struct node *head)
{
    int val, match, flag = 0;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *head2 = head;
    printf("Enter the value of  node \n");
    scanf("%d", &match);

    while (head != NULL)
    {
        if (head->data == match)
        {
            if (head->next == NULL)
            {
                char vbj;
                printf("This value is found last of the list \n\tAre you insert at end (y\\n)\n");
                scanf(" %c", &vbj);
                if (vbj == 'y' || vbj == 'Y')
                {
                    insert_at_end(head2);
                }
                else if (vbj == 'n' || vbj == 'N')
                {
                    return;
                }
                else
                {
                    printf("Choose proper value\n");
                }
                flag = 1;
            }
            else
            {

                printf("Enter the value  to add  after\n");
                scanf("%d", &val);
                flag = 1;
                temp->data = val;
                temp->next = head->next;
                head->next = temp;
                break;
            }
        }
        head = head->next;
    }

    if (flag == 0)
    {
        printf("Value not found \n");
        return;
    }
    else
    {
        printf("Value Inserted\n");
    }
}

// This function take struct node pointer and insert before node
struct node *insert_before_value(struct node *head)
{
    int match, val, flag = 0;
    struct node *head2 = head;
    printf("Enter the node value\n");
    scanf("%d", &match);
    char vkb;
    if (head->data == match)
    {

        flag = 1;
        printf("This value found on head  continue to add value before head to enter \n");
        scanf(" %c", &vkb);
        fflush(stdout);
        fflush(stdin);
        if (vkb == 'y' || vkb == 'Y')
        {
            head = insert_at_first(head);
            return head2;
        }
        else if (vkb == 'n' || vkb == 'N')
        {
            return head2;
        }
        else
        {
            printf("Enter proper value\n");
            return head2;
        }
    }

    else
    {
        struct node *prev = head;

        while (head->next != NULL)
        {

            if (head->data == match)
            {
                printf("Enter the value to insert \n");
                scanf("%d", &val);
                struct node *temp = (struct node *)malloc(sizeof(struct node));
                temp->data = val;
                temp->next = head;
                prev->next = temp;
                flag = 1;
                break;
            }
            prev = head;
            head = head->next;
        }
        if (flag)
        {
            printf("Value inserted\n");
        }
        else
        {
            printf("Value not found\n");
        }
    }

    return head2;
}

// This function take struct node pointer and delete node at end
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

// This change the value already present in the node
void change1(struct node *head)
{
    int match, val;
    printf("Enter the node value \n");
    scanf("%d", &match);
    while (head->next != NULL)
    {
        if (head->data == match)
        {
            printf("Enter the value to change\n");
            scanf("%d", &val);
            head->data = val;
            break;
        }
    }
    if (head != NULL)
    {
        printf("Value change %d to %d\n", match, val);
        return;
    }
    printf("value not found\n");
}

// This function take struct node pointer and delete node at start(head)
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

// This function take struct node pointer and delete node before given value
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

// This function take struct node pointer and delete node at given value
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

// Delete all linked list member;
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

// This functoion is sort all the node in increasing order
void sort(struct node *head)
{
    struct node *ptr, *ptr2;
    int temp;
    for (ptr = head; ptr != NULL; (ptr) = ptr->next)
    {
        for (ptr2 = ptr->next; ptr2 != NULL; ptr2 = ptr2->next)
        {
            if (ptr->data > ptr2->data)
            {
                temp = ptr2->data;
                ptr2->data = ptr->data;
                ptr->data = temp;
            }
        }
    }
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

    int c, val, flag = 0;
    // here this loop repeat infinite and called all function perform according
    while (1)
    {
        fflush(stdin);
        system("cls");
        printf("_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t|\n");
        printf("                                         This is BHARGAV Program                                                |\n");
        printf("_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n\n");
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
        printf("\t14:Sort\n");
        printf("\t15:EXIT\n");
        printf("\n\t\t");
        printf("\n\n\t\tEnter the choise\n\t\t");
        // printf("_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n\n");
        // printf("\t\t");
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
            change1(head);
            break;
        case 4:
            head = insert_before_value(head);
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
            flag = 1;
            break;
        case 13:
            head->data = val;
            break;
        case 14:
            sort(head);
            break;
        case 15:
            exit(1);
            break;
        default:
            printf("Enter proper value\n");
            break;
        }
        printf("\n\t\t\tEnter the any key to continue\n\t\t\t");
        scanf("%d");
    }
    return 0;
}