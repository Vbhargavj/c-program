#include <stdio.h>
#include <stdlib.h>
// #include "bhargav.h"

int main()
{
    int n, s, t, sum, count;
    int *ary;
    scanf("%d", &t);
    while (t--)
    {
        sum = count = 0;
        scanf("%d%d", &n, &s);
        ary = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ary[i]);
        }
        int temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (ary[i]< ary[j])
                {
                    temp = ary[i];
                    ary[i] = ary[j];
                    ary[j] = temp;
                }
            }
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (sum >= s)
            {
                count++;
                break;
            }
            sum += ary[i];
        }

        printf("%d\n", n - count);
        printf("%d\n", count);
    }

    return 0;
}