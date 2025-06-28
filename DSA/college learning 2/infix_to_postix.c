#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    char *ary;
};
char push(struct stack *ptr, char k)
{
    ptr->ary[++ptr->top] = k;
}
int isempty(struct stack *ptr)
{
    if (ptr->top >= 0)
        return 1;
    return 0;
}
char pop(struct stack *ptr)
{
    if (isempty(ptr))
    {
        return ptr->ary[ptr->top--];
    }
}

char peek(struct stack *ptr)
{
    return ptr->ary[ptr->top];
}

int priority(char c)
{
    if (c == ')' || c == '(')
    {
        return 0;
    }
    else if (c == '-' || c == '+')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    return 3;
}
int isnum(char c)
{
    if (c == '(' || c == ')' || c == '+' || c == '-' || c == '*' || c == '/' || c == '^')
    {
        return 0;
    }
    return 1;
}
int main()
{
    struct stack *postfix = (struct stack *)malloc(sizeof(struct stack));
    postfix->ary = (char *)malloc(sizeof(int) * 10);
    postfix->top = -1;
    // printf("%d", isnum('*'));
    char infix[20];
    char c;
    printf("Enter the expresion\n");
    scanf("%s", infix);
    int i = 0;

    while (infix[i] != '\0')
    {
        // printf("%d", i);
        c = infix[i];

        if (postfix->top == -1)
        {
            push(postfix, c);
        }
        else if (c == '(')
        {
            push(postfix, c);
        }
        else if (c == ')')
        {
            char x = pop(postfix);
            while (x != '(')
            {

                printf("%c", x);
                x = pop(postfix);
            }
        }
        else if (isnum(c))
        {
            printf("%c ", c);
        }

        else
        {

            if (priority(peek(postfix)) >= priority(c))
            {
                printf("%c", pop(postfix));
            }
            push(postfix, c);
        }
        i++;
    }
    while (postfix->top != -1)
    {
        // printf("yes");
        printf("%c", pop(postfix));
    }

    return 0;
}