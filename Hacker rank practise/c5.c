#include <stdio.h>
#include <stdlib.h>

int macth(int a, int b)
{
    if (a == b)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int match2(int a, int b, int c)
{
    if (a == b + c)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int match3(int a, int b, int c, int d)
{
    if (a == b + c + d)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main(void)
{
    // your code goes here
    int n;
    scanf("%d", &n);

    int *ary = (int *)malloc(n * 4 * sizeof(int));
    int *a = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &ary[i * 4 + j]);
            fflush(stdin);
        }
    }
    int i, f = 0;
direct:
    // if (n == i - 1)
    // {
    // }

    for (i = 0; i < n; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            f = macth(ary[i], ary[i * 4 + j]);
            // printf("%d", f);
            if (f == 1)
            {
                a[i] = 1;
                if (i == n - 1)
                {
                    goto redirect;
                    /* code */
                }

                goto direct;
                break;
            }
            else
            {
                a[i] = 0;
            }
        }
    }
redirect:
    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}