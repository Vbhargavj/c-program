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
char peek(struct stack *ptr)
{
    char c;
    c = ptr->arr[ptr->top--];
}
int main()
{
    printf("\nBHARGAV JENTIBHAI VADUKAR\n");
    printf("ENROLLMENT NO : 210210116054\n");
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    s->size = 300;
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));
    char r[300], c;
    printf("Enter the string\n");
    scanf("%s", r);
    for (int i = 0; i < strlen(r); i++)
    {
        push(s, r[i]);
    }
    for (int i = 0; i < strlen(r); i++)
    {
        c = peek(s);
        printf("%c", c);
    }
    return 0;
}