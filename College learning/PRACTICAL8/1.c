#include <stdio.h>

void max(int, int);

int main()
{

    int a, b;

    printf("Enter the first number");
    scanf("%d", &a);
    printf("Enter the second number");
    scanf("%d", &b);
    max(a, b);
    return 0;
}

void max(int a, int b)
{

    (a > b) ? printf("%d is maximum", a) : printf("%d is maximum", b);
}