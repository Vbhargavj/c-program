#include <stdio.h>
#include <stdlib.h>

struct queue
{
    int *ary;
    int r, f, size;
};

int full(struct queue *q)
{
    if (q->f - q->r == 1)
    {
        return 1;
    }
    else if (q->f == 0 && q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}

int isempty(struct queue *q)
{
    if (q->f == -1)
    {
        return 1;
    }
    return 0;
}

void insert(struct queue *q)
{
    if (full(q))
    {
        printf("Queue is full not inserted\n");
    }
    else
    {
        int val;
        printf("Enter the value to insert\n");
        scanf("%d", &val);
        if (q->f == -1 && q->r == -1)
        {
            q->f = q->r = 0;
            q->ary[q->r] = val;
        }
        else if (q->r == q->size - 1)
        {
            q->r = 0;
            q->ary[q->r] = val;
        }
        else{
            q->r++;
            q->ary[q->r] = val;
        }
    }
    printf("Inserted Successfully\n");
}

void delet(struct queue *q)
{
    if (isempty(q))
    {
        printf("Queue is empty\n");
    }
    else
    {
        if (q->f == q->size - 1)
        {
            q->f = 0;
        }
        else
        {
            q->f++;
        }
    }
    printf("Deleted Successfully\n");
}
void display(struct queue *q){
    for (int i = 0; i < q->size; i++)
    {
        printf("%d\n", q->ary[i]);
    }
    
}

int main()
{
    struct queue *q = (struct queue *)malloc(sizeof(struct queue));
    q->f = q->r = -1;
    q->size=4;
    q->ary = (int *)malloc(q->size * sizeof(int));
    int v;
    printf("\nBHARGAV JENTIBHAI VADUKAR\n");
    printf("ENROLLMENT NO : 210210116054\n");
    while (1)
    {
        printf("1: insert\n");
        printf("2: Delete\n");
        printf("3: Display\n");
        printf("4: Exit\n");
        printf("Choose any operation to perform\n");
        scanf("%d", &v);
        switch (v)
        {
        case 1:
            insert(q);
            break;
        case 2:
            delet(q);
            break;
        case 3:
            display(q);
            break;
        case 4:
            exit(1);
        default:
            printf("Enter the proper choise\n");
            break;
        }
    }
    return 0;
}