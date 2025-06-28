#include <stdio.h>
#include <conio.h>

int main()
{

    int a, b;
    char op;
    printf("Enter the oparator");
    scanf("%c", &op);
    printf("Enter the first value");
    scanf("%d", &a);
    printf("Enter the second value");
    scanf("%d", &b);
    switch (op)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    case '%':
        printf("%d", a % b);
        break;
    default:
        printf("please enter valid information");
    }

    return 0;
}