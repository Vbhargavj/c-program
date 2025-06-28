#include <stdio.h>
#include <stdlib.h>

struct stacke
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stacke *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stacke *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    // struct stack s;
    // s.size = 80;
    // s.top = -1;.
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stacke *s = (struct stacke *)malloc(s->size * sizeof(struct stacke));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    int d = isFull(s);
    printf("%d\n", d);
    if (isEmpty(s))
    {
        printf("Empty  stack\n");
    }
    else
    {
        printf("Not empty stack\n");
    }
    return 0;
}
