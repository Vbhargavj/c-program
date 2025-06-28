#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    if (c == '(')
    {
        return 0;
    }
    else if (c == '+' || c == '-')
    {
        return 1;
    }
    else if (c == '*' || c == '/')
    {
        return 2;
    }
    return 3;
}

int isop(char c)
{
    if (c != '+' || c != '-' || c != '*' || c != '/' || c != '(' || c != ')')
    {
        return 0;
    }
    return 1;
}
char converter(char *arr)
{
    strrev(arr);
    for (int i = 0; i < strlen(arr); i++)
    {
        if (arr[i] == ')')
            arr[i] = '(';
        else if (arr[i] == '(')
        {
            arr[i] = ')';
        }
    }
}
int main()
{
    struct stack *prefix = (struct stack *)malloc(sizeof(struct stack));
    prefix->size = 10;
    prefix->top = -1;
    prefix->ary = (char *)malloc(sizeof(char) * prefix->size);
    char exp[10];
    printf("Enter the expresion\n");
    scanf("%s", exp);
    converter(exp);
    char c = exp[0];
    int i = 0;
    while (c != '\0')
    {
        if (prefix->top == -1)
        {
            push(prefix, c);
        }
        else if (!isop(c))
        {
            printf("%c", c);
        }
        else if (c == '(')
        {
            push(prefix, c);
        }
        else if (c == ')')
        {
            char x = pop(prefix);
            while (x != ')')
            {
                printf("%c", x);
            }
        }
        else
        {
            if (priority(peek(prefix)) >= priority(c))
            {
                printf("%c", pop(prefix));
            }
            push(prefix, c);
        }
        i++;
        c = exp[i];
    }
    while (prefix->top != -1)
    {
        printf("%c", pop(prefix));
    }

    return 0;
}