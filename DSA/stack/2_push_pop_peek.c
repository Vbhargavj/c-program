#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int size;
    int top;
    int *arr;
};

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
int IsEmpty(struct stack *ptr)
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
void push(struct stack *ptr, int element)
{
    if (isFull(ptr))
    {
        printf("Stack is overflow\n");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = element;
        printf("Insert sucessfully\n");
    }
}
int pop(struct stack *ptr)
{
    if (IsEmpty(ptr))
    {
        printf("Stack is underflow\n");
    }
    else
    {
        return ptr->arr[ptr->top--];
    }
}
void peek(struct stack *ptr, int index)
{
    if (ptr->top > index - 1)
        printf("In stack index %d element:- %d\n", index, ptr->arr[ptr->top - index + 1]);
    else
        printf("not possible value in stack\n");
}
// index is starting 1 last element is index 1;
void change(struct stack *ptr, int index, int value)
{
    struct stack *tmp;
    tmp = (struct stack *)malloc(sizeof(struct stack));
    tmp->arr = (int *)malloc(ptr->size * sizeof(int));
    tmp->top = -1;
    int d;
    printf("YES");
    for (int i = 1; i < index; i++)
    {
        d = pop(ptr);
        push(tmp, d);
        printf("%d", tmp->arr[i - 1]);
    }
    printf("Enter the value for change in index : %d\n", index);
    scanf("%d", &d);
    // printf("%d\n", tmp->arr[0]);
    // printf("%d\n", tmp->arr[1]);
    // printf("%d\n", tmp->arr[2]);
    push(ptr, d);
    // printf("%d\n", ptr->arr[0]);
    // printf("%d\n", ptr->arr[1]);
    // printf("%d\n", ptr->arr[2]);
    printf("\nYES1\n");
}
int main()
{
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 3;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    push(s, 5);
    push(s, 56);
    push(s, 566);
    change(s, 1, 12);
    // peek(s,2);
    printf("%d\n", s->arr[1]);
    printf("%d\n", s->arr[2]);
    // peek(s, 2);
    return 0;
}