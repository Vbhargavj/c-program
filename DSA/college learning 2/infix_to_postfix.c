#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *ary;
};

// push element in the stack
void push(struct stack *ptr, char c)
{
    ptr->top++;
    ptr->ary[ptr->top] = c;
}

// pop the data from stack
char pop(struct stack *ptr)
{
    return ptr->ary[ptr->top--];
}

int check(char t)
{
    if (t != '+' && t != '-' && t != '*' && t != '/' && t != '(' && t != ')' && t != '^')
    {
        return 1;
    }
    return 0;
}

int priority(char t, char l)
{
    // this is use to store at starting
    if (t == '+' && l == '+' || t == '-' && l == '-' || t == '*' && l == '*' || t == '/' && l == '/')
    {
        return 1;
    }
    if (t=='+'&& t=='-')
    {
        /* code */
    }
    
    else if (t == '(')
    {
        return 2;
    }

    // this is check the + with +
}

void po_to_in()
{
    struct stack *infix = (struct stack *)malloc(sizeof(struct stack));
    infix->top = -1;
    infix->ary = (char *)malloc(sizeof(char) * 30);

    struct stack *result = (struct stack *)malloc(sizeof(struct stack));
    result->top = -1;
    result->ary = (char *)malloc(sizeof(char) * 30);

    struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    temp->top = -1;
    temp->ary = (char *)malloc(sizeof(char) * 30);

    // scaning value from  user
    char c[30];
    printf("Enter the expresion\n");
    scanf("%s", c);

    // store value in infix
    for (int i = strlen(c); i >= 0; i--)
    {
        push(infix, c[i]);
    }

    // print those expresion
    // for (int i = strlen(c); i >= 0; i--)
    // {
    //     printf("%c ", pop(infix));
    // }

    // repeating the all the stack
    char t, l = '\0';

    while (infix->top == 0)
    {
        t = pop(infix);

        if (check(t))
        {
            // this is operand it is direct store in infix
            push(result, t);
        }
        else if (temp->top == -1)
        {
            push(temp, t);
        }

        else if (priority(t, l) == 1)
        {
            push(result, t);
        }

        // this is use to () operator
        else if (priority(t, l) == 2)
        {
            char tmp = '\0';
            while (tmp != ')')
            {
                tmp = pop(infix);
                push(temp, tmp);
            }
            tmp = pop(infix);
        }
        l = t;
    }
}

int main()
{
    po_to_in();
    return 0;
}