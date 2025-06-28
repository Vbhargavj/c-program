#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
struct intstack
{
    int size;
    int top;
    int *arr;
};

// push element in the stack
void push(struct stack *ptr, char c)
{
    int a = c + '0';
    ptr->top++;
    ptr->arr[ptr->top] = a;
}

// store integer data in stack
void intpush(struct intstack *ptr, int c)
{
    ptr->top++;
    ptr->arr[ptr->top] = c;
}

// pop the char data from stack
char pop(struct stack *ptr)
{
    return ptr->arr[ptr->top--];
}

// pop the int data from stack
int intpop(struct intstack *ptr)
{
    return ptr->arr[ptr->top--];
}

// display all the stack data
void display(struct stack *ptr)
{
    int p = ptr->top;
    for (int i = p; i >= 0; i--)
    {
        printf("%c\n", ptr->arr[i]);
    }
}

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

// this function is perform operation according to expresion
int op(char op, int y, int x)
{
    // convert character to integer
    // int a = y - '0', b = x - '0';
    int a = y;
    int b = x;
    char c;
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
        printf("Please entervalid expresion\n");
        exit(1);
        break;
    }
}
int main()
{
    printf("\nBHARGAV JENTIBHAI VADUKAR\n");
    printf("ENROLLMENT NO : 210210116054\n");

    // store postfix in stack
    struct stack *postfix = (struct stack *)malloc(sizeof(struct stack));
    postfix->size = 30;
    postfix->top = -1;
    postfix->arr = (char *)malloc(postfix->size * sizeof(char));

    // store result in stack
    struct intstack *result = (struct intstack *)malloc(sizeof(struct intstack));
    result->size = 30;
    result->top = -1;
    result->arr = (int *)malloc(result->size * sizeof(int));

    char r[30], c, s;
    int a, b, sum;
    // scan expresion from user
    printf("Enter the postfix\n");
    scanf("%s", r);

    for (int i = strlen(r) - 1; i >= 0; i--)
    {
        push(postfix, r[i]);
    }
    display(postfix);

    // printf("%c\n", pop(postfix));
    for (int i = 0; postfix->top != -1; i++)
    {
        c = pop(postfix);
        if (c != '+' && c != '-' && c != '/' && c != '*')
        {
            intpush(result, c);
        }
        else
        {
            a = intpop(result);
            b = intpop(result);
            sum = op(c, b, a);
            intpush(result, sum);
        }
    }
    // make intger for operation
    // make stack store intger for duplicte

    return 0;
}