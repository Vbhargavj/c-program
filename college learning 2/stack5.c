#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// thisistack for char data type store expresion
struct stack
{
    int size;
    int top;
    char *arr;
};
// this stack use to store int data
struct intstack
{
    int size;
    int top;
    int *arr;
};
// check the pop and create
int check(char c)
{
    if (c != '+' && c != '-' && c != '/' && c != '*')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void display(struct stack *ptr)
{
    int p = ptr->top;
    for (int i = 0; i <= p; i++)
    {
        printf("%c\n", ptr->arr[i]);
    }
}

void intdisplay(struct stack *ptr)
{
    for (int i = 0; ptr->top != -1; i--)
    {
        printf("%d\n", ptr->arr[i]);
    }
}

int op(char op, int b, int a)
{
    switch (op)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;

    case '*':
        return a * b;
        break;

    case '/':
        return a / b;
        break;

    default:
        printf("Please enter valid expresion\n");
        exit(1);
        break;
    }
}
char pop(struct stack *ptr)
{
    return ptr->arr[ptr->top--];
}
int intpop(struct intstack *ptr)
{
    return ptr->arr[ptr->top--] + '0';
}
void push(struct stack *ptr, char c)
{
    ptr->top++;
    ptr->arr[ptr->top] = c;
}
void intpush(struct intstack *ptr, char c)
{
    int n = c + '0';
    ptr->top++;
    ptr->arr[ptr->top] = n;
}

int main()
{
    struct stack *postfix = (struct stack *)malloc(sizeof(struct stack));
    postfix->top = -1;
    postfix->size = 30;
    postfix->arr = (char *)malloc(postfix->size * sizeof(char));

    struct intstack *result = (struct intstack *)malloc(sizeof(struct intstack));
    result->top = -1;
    result->size = 30;
    result->arr = (int *)malloc(result->size * sizeof(int));
    char ex[30], c;
    printf("Enter the expresion\n");
    scanf("%s", ex);
    for (int i = strlen(ex) - 1; i >= 0; i--)
    {
        c = ex[i];
        push(postfix, c);
    }
    int n, m, sum;
    for (int i = 0; i < strlen(ex); i++)
    {
        c = pop(postfix);
        printf("in loop%c\n", c);
        if (check(c))
        {
            printf("in else %c\n", c);
            intpush(result, c);
        }
        else
        {
            printf("in  if%c\n", c);
            n = intpop(result);
            m = intpop(result);
            sum = op(c, n, m);
            result->top++;
            result->arr[result->top] = sum;
        }
    }

    display(postfix);
    printf("%d\n",sum=intpop(result));

    return 0;
}
