// singular queue
#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f, r;
    int *arr;
    int size;
};

int isFull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isEmpty(struct queue *q)
{
    if (q->f == q->r || q->f == -1)
    {
        return 1;
    }
    return 0;
}

void insert(struct queue *q)
{
    int value;
    printf("Enter the value to add\n");
    scanf("%d", &value);
    if (isFull(q))
    {
        printf("The queue is full\n");
    }
    else
    {
        if (q->r == -1)
        {
            q->r = q->f = 0;
            q->arr[q->r] = value;
        }
        else
        {
            q->r++;
            q->arr[q->r] = value;
        }
    }
}

int delete(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("\nThe queue is empty\n");
    }
    else
    {
        return q->arr[q->f++];
    }
}

void display(struct queue *q)
{
    if (isEmpty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        for (int i = q->f; i <= q->r; i++)
        {
            printf("Element : %d\n", q->arr[i]);
        }
    }
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 5;
    q->r = q->f = -1;
    q->arr = (int *)malloc(q->size * sizeof(int));
    int c;

    while (1)
    {
        system("cls");
        printf("\nBHARGAV JENTIBHAI VADUKAR\n");
        printf("ENROLLMENT NO : 210210116054\n");
        // printf("|_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n|\t\t\t\t\t\t\t\t\t\t\t\t\t\t |\n");
        // printf("\x1B[35m");
        // printf("|                                         VADUKAR BHARGAV JENTIBHAI                                              |\n");
        // printf("|                                     ENROLLMENT NUMBER : 210210116054                                           |\n");
        // printf("\x1B[0m");
        // printf("|_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.|\n\n");
        printf("Choose option to perform operation\n");
        printf("1:Insert\n");
        printf("2:Delete\n");
        printf("3:Display\n");
        printf("4:Exit\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            insert(q);
            break;
        case 2:
            delete (q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            exit(1);
        default:
            printf("Enter valid choise\n");
            break;
        }
        printf("Press any key to continue\n");
        scanf("%d", &c);
    }
    return 0;
}