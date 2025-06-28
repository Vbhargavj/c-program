#include <stdio.h>
#include <stdlib.h>
// void pushint(int, int,int);
void integer(int);
void pushint(int index, int size, int stack[])
{
    if (size == top)
    {
        printf("ERROR :Stack is full\n");
    }
    else
    {
        scanf("%d", &stack[top]);
        top++;
    }
}

int top = 0;
int main()
{
    int n, choise;

    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    printf("Enter the type of the stack: \n");
    printf("Enter 1 for integer datatype\n");
    printf("Enter 2 for float datatype\n");
    printf("Enter 3 for char datatype\n");
    scanf("%d", &choise);
    switch (choise)
    {
        {
        case 1:
            integer(n);
            break;

        default:
            break;
        }

        return 0;
    }
}
void integer(int n)
{
    int *iack;
    iack = (int *)malloc(n * sizeof(int));
    pushint(1, n, iack[top]);
}
