#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    int top;
    char *arr;
};
int s_top(struct stack *sp)
{
    return sp->arr[sp->top];
}
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
void push(struct stack *ptr, char value)
{
    if (isFull(ptr))
    {
        printf("Stack Overflow! \n\t Cannot push %d to the stack\n", value);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = value;
    }
}
char pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow!\n\t Cannot pop element from the stack\n");
        return -1;
    }
    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int p(char ch)
{
    if (ch == '*' || ch == '/')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return 0;
}
int op(char ch)
{
    if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
        return 1;
    else
        return 0;
}
char *ITP(char *infix)
{
    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0;
    int k = 0;
    while (infix[i] != '\0')
    {
        if (!op(infix[i]))
        {
            postfix[k] = infix[i];
            k++;
            i++;
        }
        else
        {
            if (p(infix[i]) > p(s_top(sp)))
            {
                push(sp, infix[i]);
                i++;
            }
            else
            {
                postfix[k] = pop(sp);
                k++;
            }
        }
    }
    while (!isEmpty(sp))
    {
        postfix[k] = pop(sp);
        k++;
    }
    postfix[k] = '\0';
    return postfix;
}
int main()
{
    printf("****************************");
    printf("\nVADUKAR BHARGAV JENTIBHAI\n");
    printf("ENROLLMENT NUMBER: 210210116054\n");
    printf("****************************\n");
    char *infix;
    printf("Enter the expression:");
    scanf("%s", infix);
    ITP(strrev(infix));
    printf("prefix is %s", strrev(ITP(infix)));
    return 0;
}