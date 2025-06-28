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

// check function is use to check wether character is operand or operator
int check(char c)
{
    if (c != '+' || c != '-' && c != '*' || c != '/' || c != '(' || c != ')' || c != '^')
    {
        printf("I am operand %c \n ", c);
        return 1;
    }
    printf("I am operator %c \n", c);
    return 0;
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
    else if ((c == '*' && s == '/') || (c == '/' && s == '*') || (c == '*' && s == '*') || (c == '/' && s == '/'))
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
void display(struct stack *ptr)
{
    int p = ptr->top;
    for (int i = 0; i <= p; i++)
    {
        printf("%c ", ptr->ary[i]);
    }
}
int main()
{
    char bhargav[30];
    printf("Enter the infix\n");
    scanf("%s", bhargav);

    struct stack *temp = (struct stack *)malloc(sizeof(struct stack));
    temp->top = -1;
    temp->size = 30;
    temp->ary = (char *)malloc(sizeof(char) * temp->size);

    struct stack *postfix = (struct stack *)malloc(sizeof(struct stack));
    postfix->top = -1;
    postfix->size = 30;
    postfix->ary = (char *)malloc(sizeof(char) * postfix->size);

    char p, b;
    for (int i = 0; i < strlen(bhargav); i++)
    {
        p = bhargav[i];
        // all operand is store directly to postfix
        if (check(p))
        {
            printf("I am store in character in postfix\n");
            push(postfix, p);
        }
        else
        {
            b = pop(temp);

            // if there no element in the temp that direct store into the temp
            if (temp->top==-1)
            {
                printf("I am firwst if\n");
                push(temp, p);
            }
            else
            {
                // if priority is same
                if (priority(p, b) == 1)
                {
                    printf("I am from 1\n");
                    // store new character in temp in place of old character
                    push(temp, p);
                    // store old character from temp to result
                    push(postfix, b);
                }
                else if (priority(p, b) == 2)
                {
                    printf("I am from 2\n");
                    // if priority is greater than is store in the temp
                    //  first store old character in temp
                    push(temp, b);
                    // and last store new character in temp
                    push(temp, p);
                }
                else if (priority(p, b) == 3)
                {
                    printf("I am from 3\n");
                    // if priority is less than
                    //  old charcter store in postfix
                    push(postfix, b);
                    // new character is store in temp
                    push(temp, p);
                }
            }
        }
    }
    // while (temp->top!=0)
    // {
    //     b = pop(temp);
    //     push(postfix, b);
    // }
    display(postfix);
    display(temp);

    return 0;
}