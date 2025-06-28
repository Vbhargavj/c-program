#include <stdio.h>
#include<stdlib.h>
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

int main()
{
    char exp[30], c;
    printf("Enter the expresion\n");
    scanf("%s", exp);

    struct stack *infix = (struct stack *)malloc(sizeof(struct stack));
    // printf("%d",strlen(exp));
    infix->top=-1;
    infix->size=30;
    infix->arr=(char *)malloc(sizeof(char)*infix->size);

    for (int i = 0; i < strlen(exp); i++)
    {
        push(infix, exp[i]);
    }
    for (int i = 0; i < strlen(exp); i++)
    {
        c = pop(infix);
        printf("%c", c);
    }

    return 0;
}