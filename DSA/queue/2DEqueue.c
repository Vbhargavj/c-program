#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int f, r;
    int size;
    int *ary;
};

// this function is check queue is full or not 
int isFull(struct queue *ptr)
{
    if (ptr->r - ptr->f == 1 || ptr->f == ptr->size - 1 || ptr->r == 0)
    {
        return 1;
    }
    return 0;
}

// this is show empty queue or not 
int isEmpty(struct queue *ptr)
{
    if (ptr->f == -1 || ptr->r == ptr->size)
    {
        return 1;
    }
    return 0;
}

// this is insert value at end of queue
void insertr(struct queue *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("The queue is Full so no insert any row\n");
    }
    else
    {
        ptr->ary[--ptr->r] = val;
    }
}

// this is insert value at front of the queue
void insertf(struct queue *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("The queue is Full so no insert any row");
    }
    else
    {
        ptr->ary[++ptr->f] = val;
    }
}

// delete at rear of the queue
void deleter(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("The queue is overflow\n\tNo  row deleted\n");
    }
    else
    {
        ptr->r++;
    }
}

// delete at the front
void deletef(struct queue *ptr)
{
    if (isEmpty(ptr))
    {
        printf("The queue is overflow\n\tNo  row deleted\n");
    }
    else
    {
        ptr->f--;
    }
}

int main()
{
    struct queue *q;
    q = (struct queue *)malloc(sizeof(struct queue));
    q->ary = (int *)malloc(sizeof(int) * q->size);
    q->f = -1;
    q->size = 5;
    q->r = q->size;
    insertf(q, 12);
    insertf(q, 12);
    insertf(q, 12); 
    deleter(q);
    insertf(q, 12); 
    insertr(q, 12);
    insertr(q, 12);
    return 0;
}