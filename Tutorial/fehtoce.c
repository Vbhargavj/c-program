// #include<stdio.h>
// float feh(float feh);
//
// int main()
// {
//     float cel=5;
//
//     printf("%f\n",feh(cel));
//     // printf("%f",9/5.);
//     // printf("%f\n",5.0/9.0);
//
//
//     return 0;
// }
// float feh(float cel){
//     float fer=cel*9/5+32;
//     return fer;
// }
#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
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

int isFull(struct stack *ptr)
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
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));

    if (isEmpty(s))
    {
        printf("Empty not stack\n");
    }
    else
    {
        printf("Empty stack\n");
    }
    return 0;
}
