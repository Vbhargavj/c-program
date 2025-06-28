#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // your code goes here
    int n, i, c,j;
    scanf("%d", &c);
    while (c--)
    {
        scanf("%d", &n);
        int *ary = (int *)malloc(n * 2);
        for (i = 0; i < n; ++i)
        {
            scanf("%d", &ary[i]);
        }
        for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
            {
                if (ary[i] > ary[j])
                {
                    int temp = ary[i];
                    ary[i] = ary[j];
                    ary[j] = temp;
                }
            }
        }
        printf("%d\n", ary[0] + ary[1]);
    }
    return 0;
}
