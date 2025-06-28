#include <stdio.h>
#include <stdlib.h>
/ so struct queue
{
    int f;
    int r;
    int size;
    int *arr;
};

int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 0;
    }
    else
    {
        printf("ok");
        return 1;
    }
}
int isempty(struct queue *q)
{
    if (q->f == -1)
    {
        return 0;
    }
    else if (q->f == q->r)
    {
    }

    else
    {
        // q->f++;
        printf("ok");
        return q->arr[q->f++];
    }
}
void insert(struct queue *q, int n)
{
    if (isfull(q))
    {
        if (q->r == -1)
        {
            q->r = 0;
            q->f = 0;
            q->arr[q->r] = n;
            printf("ok");
        }
        else
        {
            q->r++;
            q->arr[q->r] = n;
            // printf("ok");
        }
    }
    else
    {
        printf("\nThe queue is full so you can not enter the value \n");
    }
}
int delete (struct queue *q)
{
    if (isempty(q))
    {
        q->f++;
    }
    else
    {
        printf("Delete operation not posible on queue because queue is empty\n");
    }
}
int main()
{
    struct queue q;
    q.f = q.r = -1;
    q.size = 10;
    q.arr = (int *)malloc(q.size * sizeof(int));
    insert(&q, 13);
    insert(&q, 13);
    char x = delete (&q);
    x = delete (&q);
    x = delete (&q);

    return 0;
}