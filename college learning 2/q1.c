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

void insert(struct queue *q, int value)
{
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

int delete (struct queue *q)
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
    for (int i = q->f; i <= q->r; i++)
    {
        printf("Element : %d\n", q->arr[i]);
    }
}
int main()
{
    struct queue q;
    q.arr = (int *)malloc(sizeof(int) * 15);
    q.f = q.r = -1;
    q.size = 15;
    // delete(&q);
    insert(&q, 12);
    insert(&q, 12);
    insert(&q, 1);
    delete (&q);
    display(&q);
    // delete(&q);

    return 0;
}