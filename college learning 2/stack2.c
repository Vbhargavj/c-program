#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stack
{
    int size;
    int top;
    char *arr;
};
void push(struct stack *ptr, char c)
{
    ptr->top++;
    ptr->arr[ptr->top] = c;
}
char pop(struct stack *ptr)
{
    return ptr->arr[ptr->top--];
}
int main()
{
    printf("\nBHARGAV JENTIBHAI VADUKAR\n");
    printf("ENROLLMENT NO : 210210116054\n");
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 30;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char r[30], c;
    printf("Enter the expresion\n");
    scanf("%s", r);
    for (int i = 0; i < strlen(r); i++)
    {
        push(s, r[i]);
    }
    int count = 0;
    for (int i = 0; i < strlen(r); i++)
    {
        c = pop(s);
        if (c == '(')
        {
            count++;
        }
        else if (c == ')')
        {
            count--;
        }
    }
    if (count == 0)
    {
        printf("Expresion is ok\n");
    }
    else
    {
        printf("Expresion is wrong\n");
    }

    return 0;
}