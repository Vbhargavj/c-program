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

// check the if operand or operator
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

// display stack fo char
void display(struct stack *ptr)
{
    int p = ptr->top;
    for (int i = 0; i <= p; i++)
    {
        printf("%c\n", ptr->arr[i]);
    }
}

// display stack fo integer
void intdisplay(struct intstack *ptr)
{
    for (int i = ptr->top; i != -1; i--)
    {
        printf("%d\n", ptr->arr[i]);
    }
}

// here all kind of calculation done here
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

// here pop for char
char pop(struct stack *ptr)
{
    return ptr->arr[ptr->top--];
}

// here pop for int
int intpop(struct intstack *ptr)
{
    return ptr->arr[ptr->top--];
}

// here push for char
void push(struct stack *ptr, char c)
{
    ptr->top++;
    ptr->arr[ptr->top] = c;
}

// here push for int
void intpush(struct intstack *ptr, int c)
{
    ptr->top++;
    ptr->arr[ptr->top] = c;
}
// this function is use to store the expresion
void store(struct stack *ptr, char *c)
{
    char ch;
    for (int i = strlen(c) - 1; i >= 0; i--)
    {
        ch = c[i];
        push(ptr, ch);
    }
}

int main()
{
    printf("\nBHARGAV JENTIBHAI VADUKAR\n");
    printf("ENROLLMENT NO : 210210116054\n\n");
    // below portion intilize char stack
    struct stack *postfix = (struct stack *)malloc(sizeof(struct stack));
    postfix->top = -1;
    postfix->size = 30;
    postfix->arr = (char *)malloc(postfix->size * sizeof(char));

    // below portion intilize int stack
    struct intstack *result = (struct intstack *)malloc(sizeof(struct intstack));
    result->top = -1;
    result->size = 30;
    result->arr = (int *)malloc(result->size * sizeof(int));

    // here need some variable
    char ex[30], c;
    int a, m, n, sum;

    printf("Enter the expresion\n");
    scanf("%s", ex);

    // store value in stack
    store(postfix, ex);

    // here our logic
    for (int i = postfix->top; i != -1; i--)
    {
        c = pop(postfix);
        if (check(c))
        {
            a = c - '0';

            intpush(result, a);
        }
        else
        {
            m = intpop(result);
            n = intpop(result);
            sum = op(c, m, n);
            intpush(result, sum);
        }
    }
    // display final result
    intdisplay(result);

    return 0;
}