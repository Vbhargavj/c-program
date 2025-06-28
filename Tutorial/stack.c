#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int top;
    int size;
    int *arr;
};

int empty(struct stack *ptr)
{
    if (ptr->top == -1)
        return 1;
    else
        return 0;
}

int full(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
        return 1;
    else
        return 0;
}

int main()
{

    struct stack *st = (struct stack *)malloc(sizeof(struct stack));
    st->top = -1;
    st->size = 10;
    st->arr = (int *)malloc(st->size * sizeof(int));

    st->arr[0] = 6;
    st->top++;

    if (empty(st))
    {
        printf("stack is empty\n");
    }

    printf("hello");
    else if(full(st))

        {
            printf("stack is full\n");
        }

    return 0;
}