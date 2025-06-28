#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // your code goes here
    int n, a, b, i, max = 0;
    int *ary = (int *)malloc(2 * a);
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d%d", &a, &b);
        (int *)realloc(ary, a * 2);
        for (i = 0; i < a; i++)
        {
            scanf("%d", &ary[i]);
        }
        for (i = 1; i < a; i++)
        {
            if (ary[i] >= max)
            {
                if (ary[i] <= b)
                {
                    max = ary[i];
                    i++;
                }
            }
        }
    }
    return 0;
}