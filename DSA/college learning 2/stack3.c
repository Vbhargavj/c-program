#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
// push element in the stack
void push(struct stack *ptr, char c)
{
    ptr->top++;
    ptr->arr[ptr->top] = c;
}

// pop the data from stack
char pop(struct stack *ptr)
{
    return ptr->arr[ptr->top--];
}

// display all the stack data
void display(struct stack *ptr)
{
    int p = ptr->top;
    for (int i = 0; i <= p; i++)
    {
        printf("%c ", ptr->arr[i]);
    }
}

// check priority of of operator
int priority(char c, char s)
{
    // when infix and postfix operator is same return 1
    if ((c == '+' && s == '-') || (c == '-' & s == '+') || (c == '+' && s == '+') || (c == '-' && s == '-'))
    {
        return 1;
    }

    // when infix and postfix operator is same return 1 for * and/
    else if ((c == '*' && s == '/') || (c == '/' & s == '*') || (c == '*' && s == '*') || (c == '/' && s == '/'))
    {
        return 1;
    }
    // when the infix priority is greater than postfix it return 2
    else if ((c == '+' && s == '/') || (c == '-' & s == '*') || (c == '+' && s == '*') || (c == '-' && s == '/'))
    {
        return 2;
    }
    // when infix priority is less than postfix it return 3
    else if ((s == '+' && c == '/') || (s == '-' & c == '*') || (s == '+' && c == '*') || (s == '-' && c == '/'))
    {
        return 3;
    }
}
int main()
{
    printf("\nBHARGAV JENTIBHAI VADUKAR\n");
    printf("ENROLLMENT NO : 210210116054\n");
    // store expresion from user
    struct stack *infix = (struct stack *)malloc(sizeof(struct stack));
    infix->size = 30;
    infix->top = -1;
    infix->arr = (char *)malloc(infix->size * sizeof(char));

    // store postfix in stack
    struct stack *postfix = (struct stack *)malloc(sizeof(struct stack));
    postfix->size = 30;
    postfix->top = -1;
    postfix->arr = (char *)malloc(postfix->size * sizeof(char));

    // store result in stack
    struct stack *result = (struct stack *)malloc(sizeof(struct stack));
    result->size = 30;
    result->top = -1;
    result->arr = (char *)malloc(result->size * sizeof(char));

    char r[30], c, s;
    int idt, t;
    // scan expresion from user
    printf("Enter the expresion\n");
    scanf("%s", r);
    // store expresion in infix stack
    for (int i = strlen(r) - 1; i >= 0; i--)
    {
        push(infix, r[i]);
    }

    for (int i = 0; infix->top != -1; i++)
    {
        // this pop from the infix
        c = pop(infix);

        // this condition is check operand and store directly into the result
        // printf("loop before :%c\n", c);
        if (c != '+' && c != '-' && c != '*' && c != '/')
        {
            // printf("In Loop :%c\n", c);
            push(result, c);
        }

        // this function is use to perform operation
        else if (c == '+' || c == '-' || c == '*' || c == '/')
        {
            // when stack is empty direct store into the postfix without check priority
            if (postfix->top == -1)
            {
                push(postfix, c);
            }

            // when postfix is not empty check condition and perform it
            else if (postfix->top >= 0)
            {
                // this is check in postfix with infix
                s = pop(postfix);
                // this function is check priority of stack and infix
                idt = priority(c, s);
                if (idt == 1)
                {
                    // when priority same
                    push(result, s);
                    push(postfix, c);
                }
                else if (idt == 2)
                {
                    char tmp;
                    push(result, s);
                    t = postfix->top;
                    for (int i = 0; i <= t; i++)
                    {
                        tmp = pop(postfix);
                        push(result, tmp);
                    }
                    push(postfix, c);
                }
                else if (idt == 3)
                {
                    push(postfix, s);
                    push(postfix, c);
                }

                else
                {
                    printf("/t/t!!!!<<<<<<Something Wrong>>>>>>!!!!!");
                }
            }
        }
        fflush(stdin);
        // push(postfix);
    }
    // this is use to after all operation complete in stack store one by one in result
    char tmp;
    t = postfix->top;
    for (int i = 0; i <= t; i++)
    {
        tmp = pop(postfix);
        push(result, tmp);
    }

    display(result);

    return 0;
}