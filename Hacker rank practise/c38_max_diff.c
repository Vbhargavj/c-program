#include <stdio.h>

int main()
{
    int t, n, s;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &n, &s);
        fflush(stdin);
        fflush(stdout);
        if (n >= s)
        {
            printf("%d\n", s);
        }
        else
        {
            printf("%d\n", 2 * n - s);
        }
    }

    return 0;
}