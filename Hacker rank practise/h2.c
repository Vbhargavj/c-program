#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int d, total = a + b;
    for (int i = 0; i < c - 2; i++)
    {
        d = a + b;
        total = total + d;
        a = b;
        b = d;
    }
    printf("%d\n", d);
    return 0;
}