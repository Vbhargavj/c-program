#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    if (a > b && a > c)
    {
        printf("%d is maximum", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is maximum", b);
    }
    else
    {
        printf("%d is maximum", c);
    }
    return 0;
}