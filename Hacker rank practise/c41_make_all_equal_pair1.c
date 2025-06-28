#include <stdio.h>
#include <stdlib.h>

int shot(int *ary, int n)
{
    int count = 0, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (ary[i] > ary[j])
            {
                temp = ary[i];
                ary[i] = ary[j];
                ary[j] = temp;
            }
        }
    }
}

int check(int *ary, int n)
{
    int count = 1, indi = 0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = i + 1; j < n; j++)
        {
            if (ary[i] == ary[j])
            {
                count++;
            }
        }
        if (indi < count)
        {
            indi = count;
        }
    }
    return indi;
}

int main()
{
    int t, n, *ary;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        ary = (int *)malloc(n * sizeof(int));

        for (int i = 0; i < n; i++)
        {
            scanf("%d", &ary[i]);
        }
        shot(ary, n);

        printf("%d\n", n - check(ary, n) - 1);
    }
   
    return 0;
}