#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f, r;
    int size;
    int *ary;
};

// this function check queue is empty or not
int isEmpty(struct queue *ptr)
{
    if (ptr->r == -1 || ptr->f == ptr->r)
    {
        return 1;
    }
    return 0;
}

// this function is use to insert valu from user
void insert(struct queue *ptr, int val)
{
    if (ptr->f == -1)
    {
        ptr->r = ptr->f = 0;
        ptr->ary[ptr->r] = val;
        printf("Inseted1\n");
    }
    else if (ptr->r == ptr->size - 1)
    {
        if (ptr->f == 0)
        {
            printf("The queue is full\n\tno more added\n");
        }
        else
        {
            ptr->r == 0;
            ptr->ary[ptr->r] = val;
            printf("Inseted2\n");
        }
    }
    else
    {
        ptr->ary[++ptr->r] = val;
        printf("Inseted3\n");
    }
}

// this function is use to delete element from queue
void delete (struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Queue is empty\n");
    }
    else
    {
        ptr->f++;
        printf("Deleted\n");
    }
}
int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->size = 5;
    q->f = q->r = -1;
    q->ary = (int *)malloc(sizeof(int) * q->size);
    insert(q, 2);
    insert(q, 2);
    insert(q, 2);
    insert(q, 2);
    insert(q, 2);
    delete (q);
    insert(q, 2);
    delete (q);
    return 0;
}